#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int x=n/2;
        int ok=1;
        for(auto y:a){
            if(mp[y]>x){
                cout<<y<<endl;

                ok=0;
                break;
            }
        }
        if(ok) cout<<"NO"<<endl;
    }
}
