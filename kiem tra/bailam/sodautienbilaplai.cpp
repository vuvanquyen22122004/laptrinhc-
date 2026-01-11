#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
         map<long long,long long>mp;

        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int ok=1;
        for(int i=0;i<n;i++){
            if(mp[a[i]]>=2){
                cout<<a[i]<<endl;
                ok=0;
                break;
            }
        }
        if(ok) cout<<"NO"<<endl;

    }
}
