#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int ok=0;;
        for(auto y:mp){
            if(y.first==x){ cout<<y.second<<endl;
            ok=1;
            break;
        }
        }
        if(ok==0) cout<<"-1"<<endl;



}
}
