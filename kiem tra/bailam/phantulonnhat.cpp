#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==v[v.size()-1]){
                    cout<<"Vi tri xuat hien : A["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
                }
            }
        }
    }
}
