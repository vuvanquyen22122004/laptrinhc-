#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long dem=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            long long res=k-a[i];
            auto it=lower_bound(a+i+1,a+n,res);
            auto it1=upper_bound(a+i+1,a+n,res);
            dem+=it1-it;

        }
        cout<<dem<<endl;
    }
}
