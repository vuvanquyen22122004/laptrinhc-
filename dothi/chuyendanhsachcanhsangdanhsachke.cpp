#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];

int main(){
    int t;
    cin>>t;
    while(t--){


        int v,e;
        cin>>v>>e;
        for(int i=1;i<=e;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            cout<<i<<":"<<" ";
            for(auto q:adj[i]){
                cout<<q<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<=v;i++){
            adj[i].clear();
        }

    }
}
