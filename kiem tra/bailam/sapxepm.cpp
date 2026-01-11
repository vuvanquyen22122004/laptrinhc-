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
        long long a[n];
        set<int>se;
        for(int i=0;i<n;i++){
            cin>>a[i];
            while(a[i]){
                int x=a[i]%10;
                a[i]/=10;
                se.insert(x);
            }
        }
        vector<int>v;
    for(auto y:se){
            v.push_back(y);

    }
    sort(v.begin(),v.end(),cmp);
    for(auto z:v){
        cout<<z<<" ";
    }
    cout<<endl;

    }
}
