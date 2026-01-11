#include<bits/stdc++.h>
using namespace std;
int n,m,u;
vector<int>adj[1001];
bool visited[1001];
vector<pair<int,int>>res;
void input(){
    cin>>n>>m>>u;
    memset(visited,false,sizeof(visited));
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]){
            res.push_back({u,v});
            dfs(v);
        }
    }
}
void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int x:adj[v]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
                res.push_back({v,x});
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    input();
    if(t==1){
        dfs(u);
        for(int i=0;i<res.size();i++){
            cout<<res[i].second<<" "<<res[i].first<<endl;
        }
    }
    else{
        bfs(u);
        for(int i=0;i<res.size();i++){
            cout<<res[i].second<<" "<<res[i].first<<endl;
        }
    }
}

