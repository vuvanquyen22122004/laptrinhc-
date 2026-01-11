#include<bits/stdc++.h>
using namespace std;
long long nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        vector<int>v;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(nt(a[i][j])N&&mp[a[i][j]]==0){
                        v.push_back(a[i][j]);
                mp[a[i][j]]++;

                }
            }
        }
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;

    }
}
