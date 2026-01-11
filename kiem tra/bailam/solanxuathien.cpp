#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}

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
    int ok=1;
    for(auto y:mp){
        if(y.first==x){
            cout<<y.second<<endl;
            ok=0;
            break;
        }
    }
    if(ok==1) cout<<"-1"<<endl;



    }
}

