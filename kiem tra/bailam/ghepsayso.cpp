#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long a[n][m];
        set<int>se;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                se.insert(a[i][j]);
            }
        }
        for(auto x:se){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
