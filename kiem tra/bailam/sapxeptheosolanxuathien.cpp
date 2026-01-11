#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
    set<int>se;
    for(auto x:mp){
        se.insert(x.second);
    }
    vector<int>v;
    for(auto y:se){
            v.push_back(y);


    }
    sort(v.begin(),v.end(),cmp);
    sort(a,a+n);
    for(int i=0;i<v.size();i++){




            for(int j=0;j<n;j++){
                if(mp[a[j]]==v[i]){
                    cout<<a[j]<<" ";

                }
            }

    }
    cout<<endl;
}
}
