### This code using C++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long get(int i){
    long long ret=1;
    for(int j=2;j*j<=i;j++){
            if(i%j==0){
                ret+=j;
                if(j*j!=i)ret+=i/j;
            }
        }
    return ret;
}
int main() {
    int N=100005;
    
    vector<long long>a(N,0);
    for(int i=2;i<=N;i++){
        
    }
    long long ans=0;
    for(int i=2;i<=N;i++)
        if(get(get(i))==i && i!=get(i)){
            a[i]+=i;
        }
    for(int i=1;i<=N;i++)a[i]+=a[i-1];
        
    int t;cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }
    return 0;
}


##
