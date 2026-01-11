#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
   auto it1=s.rbegin();
   auto it2=s.begin();
   int d=*it1-*it2;
        cout<<d-s.size()<<endl;


    }
}
