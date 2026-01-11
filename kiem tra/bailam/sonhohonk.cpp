#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;;long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]<=k) cnt++;

        }

        long long res=0;
        for(int i=0;i<cnt;i++){
            if(a[i]<=k) res++;
        }
        long long d=res;

        for(int i=cnt;i<n;i++){
            if(a[i-cnt]<=k) res--;
            if(a[i]<=k) res++;
            d=max(d,res);

        }
        cout<<cnt-d<<endl;

    }
}
