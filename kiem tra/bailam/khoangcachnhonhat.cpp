#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int res=INT_MAX;
        int ans;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                ans=a[j]-a[i];
                res=min(ans,res);

            }
        }
        cout<<res<<endl;
    }
}
