#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long a[n+1],b[m+1];
        set<long long>s1;
        set<long long>s2;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            s1.insert(a[i]);
        }
        for(long long j=0;j<m;j++){
            cin>>b[j];
            s2.insert(b[j]);
        }
        cout<<*s1.rbegin()**s2.begin()<<endl;

    }
}
