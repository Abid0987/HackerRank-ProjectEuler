### This code using c++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ans[100005];
int a[10005][7005];
void solve(){
    a[1][0]=2;
    ans[1]=2;
    int siz=1;
    
    for(int i=2;i<=10000;i++){
        for(int j=0;j<siz;j++)
            a[i][j]=a[i-1][j]*2;
        for(int j=0;j<siz;j++){
            if(a[i][j]>9){
                a[i][j+1]+=a[i][j]/10;
                a[i][j]%=10;
                if(j+1==siz)siz++;
            }
        }
        for(int j=0;j<siz;j++)ans[i]+=a[i][j];
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
