#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],ok;
void khoitao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(i>=1&&a[i]==n-k+i){
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
bool check(int a[100]){
    for(int i=1;i<k;i++){
        if(a[i]>=a[i+1]) return false;
    }
    return true;

}
int main(){
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++){
       cin>>a[i];
        v.push_back(a[i]);
    }
    ok=1;
    khoitao();
    int cnt=0;
    while(ok){
            int b[100]={0};
            vector<int>se;
           for(int i=1;i<=k;i++){
               se.push_back(*(v.begin()+a[i]-1));

           }
           int j=1;
   for(auto x:se){
        if(j<=k){


        b[j]=x;
   j++;
        }
    else break;

   }
   if(check(b)!=false) cnt++;
    sinh();

    }
    cout<<cnt;




}
