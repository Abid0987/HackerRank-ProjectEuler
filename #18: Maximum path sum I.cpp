### This code using C++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[20][20];
int d[20][20];
int n;
int solve(){
    int ret=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)d[i][j]=0;
        
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            d[i][j]=max(d[i-1][j],d[i-1][j-1])+a[i][j];
        
    for(int i=1;i<=n;i++)
        ret=max(ret,d[n][i]);
    
    return ret;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=i;j++)
                {cin>>a[i][j];d[i][j]=0;}
        cout<<solve()<<endl;
    }
    return 0;
}


##
