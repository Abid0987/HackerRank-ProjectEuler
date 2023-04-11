### This Code Using c++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<string>a(n);
    map<string,int>mp;
    
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)mp[a[i]]=i+1;
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long ans=0;
        for(int i=0;i<s.size();i++){
            ans+=s[i]-'A'+1;
        }
        cout<<ans*mp[s]<<endl;
    }
    
    
    return 0;
}


##
