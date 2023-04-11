### TThis code using c++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long f[50];
string solve(long long x){
    x--;
    string ret="";
    vector<int>v(13,0);
    
    for(int i=12;i>=0;i--){
        int k=(x/f[i]);
        x%=f[i];
        
        for(int j=0;j<13;j++){
            if(!v[j]){
                if(!k){
                     ret+=char('a'+j);
                     v[j]=i;
                     break;
                }
                k--;
            }
        }
    }
    return ret;
}
int main() {
    f[0]=1;
    for(int i=1;i<=15;i++)f[i]=f[i-1]*i;
    
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        cout<<solve(x)<<endl;
    }
    return 0;
}


##
