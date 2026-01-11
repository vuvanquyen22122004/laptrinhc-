#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    int res=0;
    for(int i=0;i<t;i++){
            map<int,int>mp;

        for(int j=0;j<3;j++){
         mp[a[i][j]]++;
        }
       if(mp[1]>mp[0]) res++;
    }
    cout<<res;
}
