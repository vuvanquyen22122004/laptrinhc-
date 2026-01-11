#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int sum;
        int res=INT_MIN;
        for(int i=0;i<n;i++){
                sum=0;
            for(int j=0;j<m;j++){
                sum+=a[i][j];
            }
        res=max(sum,res);
        }
        int ans;
        vector<int>v;
        for(int i=0;i<n;i++){
            ans=0;
            for(int j=0;j<m;j++){
                ans+=a[i][j];
            }
            if(ans==res){
                    v.push_back(i);

            }
        }
        cout<<res<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
    }
}
