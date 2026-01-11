#include<bits/stdc++.h>
using  namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long  a[n],b[m];
        vector<long long>se;
        for(int i=0;i<n;i++){
            cin>>a[i];
            se.push_back(a[i]);
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
           se.push_back(b[j]);
        }
        sort(se.begin(),se.end());
        for(auto x:se){
            cout<<x<<" ";
        }
        cout<<endl;

    }
}
