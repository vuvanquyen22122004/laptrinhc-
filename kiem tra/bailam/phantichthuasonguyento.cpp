#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    map<int,int>mp;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
                mp[i]++;
        n/=i;

        }
    }
    if(n!=1) mp[n]=1;
    for(auto x:mp){
        cout<<x.first<<"("<<x.second<<")"<<" ";
    }


}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
        cout<<endl;

    }
}
