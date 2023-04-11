### This code using c++

##

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<int,int>m;
    vector<int>v;
    int N=100000,sul=0;
    for(int i=12;i<=N;i++){
        int x=0;
        int sum=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                sum+=j;
                if(j*j<i)sum+=i/j;
            }
            if(sum>i)break;
        }
        if(sum>i){
            m[i]=1;
            v.push_back(i);
            sul++;
        }
    }
  //  cout<<sul<<endl;
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int flag=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>x)break;
            if(m[x-v[i]]){flag=1;break;}
        }
        if(flag)cout<<"YES"<<endl;else
            cout<<"NO"<<endl;
    }
    
    return 0;
}


##
