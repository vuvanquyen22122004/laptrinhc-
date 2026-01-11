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
        int res=INT_MIN;
        int cnt;
        int idex;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                cnt++;
            }
            else{
                res=max(res,cnt);
                idex=i;
                cnt=0;

            }
        }
        cout<<res+1;

    }
}

