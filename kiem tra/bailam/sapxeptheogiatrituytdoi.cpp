#include<bits/stdc++.h.>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    multimap<int,int>mp;
    for(int i=0;i<n;i++){
        int z=abs(x-a[i]);
      mp.insert({a[i],z});
    }
    set<int>se;
    for(auto q:mp){
        se.insert(q.second);N
    }
    for(auto h:se){
        for(int i=0;i<n;i++){
            if(mp[a[i]]==h) cout<<a[i]<<" ";
        }
    }
    cout<<endl;

    }
}

