#include<bits/stdc++.h>
using namespace std;
string s[100];
int n,k;
int h,ok;
int a[100];
void khoitao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }

}
void sinh(){
    int j=k;
    while(a[j]==h-k+j&&j>=1){
        j--;
    }
    if(j==0) ok=0;
    else a[j]++;
    for(int e=j+1;e<=k;e++){
        a[e]=a[e-1]+1;
    }
}
int main(){

    cin>>n>>k;
    cin.ignore(1);
    set<string>se;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        se.insert(s[i]);
    }
    vector<string>v;
    for(auto x:se){
            v.push_back(x);

    }
     h=se.size();
     khoitao();
    ok=1;
    while(ok){
        for(int i=1;i<=k;i++){
            cout<<v[a[i]-1]<<" ";
        }
        cout<<endl;
        sinh();


    }

}
