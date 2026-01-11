#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
   auto it=find(a,a+t,5);
   if(it==a.end()) cout<<"YES";
   else cout<<"no";
}
