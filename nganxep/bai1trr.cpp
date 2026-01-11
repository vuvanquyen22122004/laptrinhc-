
#include<iostream>
#include<algorithm>
#include<iostream>
using namespace std;


const int MAX=100;
int n;
int adj[MAX][MAX];
bool visited[MAX];
vector<vector<int>>components;
void DFS(int v, vector<int>$component){
    visited[v]=true;
    component.push_back(v+1);
    for(int i=0;i<n;i++){
        if(adj[v][i]&&!visited[i]){
            DFS(i,component);
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
        }
    }
    fill(visited,visited+n,false);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            vector<int>component;
            DFS(i,component);
            sort(component.begin(),component.end());
            component.push_back(component);
        }
    }
    cout<<component.size()<<endl;
    for(auto &component:components){
        for(int vertex:component){
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
    return 0;
}


}
