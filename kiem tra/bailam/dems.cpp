#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    map<string,int>mp;
    set<int>s;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        s.insert(mp[a[i]]);
    }
    for(auto x:mp){
        if(x.second==*s.rbegin()){
            cout<<x.first;
            break;
        }
    }


}



