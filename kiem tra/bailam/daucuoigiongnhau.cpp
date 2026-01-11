#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        map<char,int>mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=s.size();N
        for(auto x:mp){
            ans+=x.second*(x.second-1)/2;
        }
        cout<<ans<<endl;

    }
}
