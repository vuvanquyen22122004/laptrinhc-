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

        }
        set<int>se;
        for(int i=0;i<n;i++){
            int y=abs(x-a[i]);
            se.insert(y);
        }
        for(auto z:se){
            for(int i=0;i<n;i++){
                if(abs(x-a[i])==z) cout<<a[i]<<" ";
            }
        }
        cout<<endl;

    }
}
