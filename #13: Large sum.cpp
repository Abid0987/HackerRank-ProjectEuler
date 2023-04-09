### This Code Using C++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


string s[10005];
int a[10005];
int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];  
        reverse(s[i].begin(),s[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<s[i].size();j++)
            a[j]+=s[i][j]-'0';
    }
    for(int i=0;i<55;i++){
        a[i+1]+=a[i]/10;
        a[i]%=10;
    }
    int start=55;
    for(int i=55;i>=0;i--)
        if(a[i]){
            start=i;
            break;
        }
    for(int j=start;j>=0 && j>start-10;j--)
        cout<<a[j];
    cout<<endl;
    return 0;
}


##
