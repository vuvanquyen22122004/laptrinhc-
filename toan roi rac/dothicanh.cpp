#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
vector<int>b[1000];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        b[x].push_back(y);
        b[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        for(auto x:b[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}