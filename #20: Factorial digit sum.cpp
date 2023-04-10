### This code using C++ 

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ans[100005];
int a[2][100005];
void solve(){
    int now=0;
    int prev=1;
    a[now][0]=1;
    ans[0]=1;
    int siz=1;
    
    for(int i=1;i<=1000;i++){
        swap(now,prev);
        for(int j=0;j<siz;j++)
            a[now][j]=a[prev][j]*i;
        for(int j=0;j<siz;j++){
            if(a[now][j]>9){
                a[now][j+1]+=a[now][j]/10;
                a[now][j]%=10;
                if(j+1==siz)siz++;
            }
        }
        for(int j=0;j<siz;j++)ans[i]+=a[now][j];
       // for(int j=0;j<siz;j++)cout<<a[i][j];cout<<endl;
    }
}
int main() {
    solve();
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<ans[x]<<endl;
    }
    return 0;
}


##
