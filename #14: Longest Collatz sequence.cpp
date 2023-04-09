### This Code Using C++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int a[5000005];
int ric[5000005];
int go(long long x){
    
    int ret=1;
    while(x!=1){
        if(x<5000000 && a[x]){ret+=a[x]-1;break;}
        x=(x%2)?(x*3+1):(x/2);
        ret++;
    }
    return ret;
}
int x;
int t;
int main() {
    for(int i=2;i<=5000000;i++)a[i]=go(i);
    
    ric[1]=1;
    for(int i=2;i<=5000000;i++)
        if(a[i]<a[ric[i-1]]){
            ric[i]=ric[i-1];
        }else{
            ric[i]=i;
        }
    
    
    cin>>t;
    while(t--){
        scanf("%d",&x);
        printf("%d\n",ric[x]);
    }
    
    return 0;
}


##
