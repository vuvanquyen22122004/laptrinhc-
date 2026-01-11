#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>v[1000];
bool visited[1000];
void inp(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    memset(visited,false,sizeof(visited));
}
void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u]=true;

        while(!q.empty()){
            int z=q.front();
            cout<<z<<" ";
            q.pop();
            for(int d:v[z]){
                if(visited[d]==false){
                    q.push(d);
                    visited[d]=true;
                }
            }
        }
}


int main(){

    inp();
    bfs(1);

}
