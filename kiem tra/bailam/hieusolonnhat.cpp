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

        int ans=0;
        int res=INT_MIN;
        int ok=0;
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(a[j]>a[i]){
                        ans=a[j]-a[i];
                        res=max(ans,res);
                        ok=1;

                    }
                }
    }
    if(ok==0) cout<<"-1"<<endl;
    else{
    cout<<res<<endl;
}
}
}
