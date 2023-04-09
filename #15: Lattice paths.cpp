### This Code Using C++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define M int(1e9+7)
int f[1005];
int binpow(ll a,int n){
    ll ans=1;
    while(n){
        if(n%2)ans=(ans*a)%M;
        a=(a*a)%M;
        n/=2;
    }
    return ans;
}
int C(int a,int b){
    ll ret=f[b];
    ret=(ret*binpow(f[a],M-2))%M;
    ret=(ret*binpow(f[b-a],M-2))%M;
    return ret;
}

int main() {
    f[0]=1;
    for(int i=1;i<=1000;i++)f[i]=(1LL*f[i-1]*i)%M;
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<C(n,n+m)<<endl;
    }
    return 0;
}


##
