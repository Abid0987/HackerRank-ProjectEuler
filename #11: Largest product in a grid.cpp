### This Code Using C++

## 

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > a(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
        for(int grid_j = 0;grid_j < 20;grid_j++){
            cin >> a[grid_i][grid_j];
        }
    }
                                        
    int ma=0;
    for(int i=0;i<20;i++)
    for(int j=0;j<20;j++){
        if(j+3<20){
            ma=max(ma,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
        }
        if(i+3<20){
            ma=max(ma,a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
        }
        if(i+3<20 && j+3<20){
            ma=max(ma,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
        }
        if(i+3<20 && j+3<20){
            ma=max(ma,a[i+3][j]*a[i+2][j+1]*a[i+1][j+2]*a[i][j+3]);
        }
    }
    cout<<ma<<endl;
    return 0;
}


##
