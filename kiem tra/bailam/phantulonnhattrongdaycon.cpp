#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long a[n];
        multiset<long long>se;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            se.insert(a[i]);
        }

       auto it=se.rbegin();
       cout<<*it<<" ";
       for(int i=k;i<n;i++){
        se.erase(se.find(a[i-k]));
        se.insert(a[i]);
        cout<<*se.rbegin()<<" ";

       }
       cout<<endl;

    }
}


