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
        vector<int>v;
        for(int i=0;i<n;i++){
                int ok=0;
            for(int j=i+1;j<n;j++){
                if(a[j]==i){
                    ok=1;
        v.push_back(i);
                }
            }
            if(ok==0) v.push_back(-1);
        }
        for(auto x:v){
            cout<<x<<" ";
        }
    }
}
