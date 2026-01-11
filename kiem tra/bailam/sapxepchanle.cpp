#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    long long a[n];vector<long long>v1;
    long long b[n];
    vector<long long>v;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2!=0) v1.push_back(a[i]);
        else v.push_back(a[i]);
    }
    sort(v1.begin(),v1.end());
    sort(v.begin(),v.end(),cmp);
   for(auto z:v1){
    for(int i=1;i<n;i+=2){
        b[i]=z;
        break;
    }
   }
   for(auto e:v){
    for(int j=0;j<n;j+=2){
        b[j]=e;
        break;
    }
   }
for(auto r:b){
    cout<<r<<" ";
}
cout<<endl;
}
