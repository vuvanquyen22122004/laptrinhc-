#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=1;
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
            if(mp[b[j]]==1) mp[b[j]]=0;
            else mp[b[j]]=1;
        }
        for(auto x:mp){
                cout<<x.first<<" ";

    }
    cout<<endl;
    for(auto x:mp){
        if(x.second==0) cout<<x.first<<" ";
    }
    cout<<endl;
}
}
