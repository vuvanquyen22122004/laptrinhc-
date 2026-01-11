#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],b[100],ok;
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]=1;
    }
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    ok=1;
    sinh();
    vector<vector<int>>v;
    while(ok){
            vector<int>se;
            int sum=0;
            for(int i=1;i<=n;i++){
                if(a[i]==1) sum+=b[i];
            }
            if(sum==k){
                for(int i=1;i<=n;i++){
                    if(a[i]==1) se.push_back(b[i]);
                }
                v.push_back(se);
            }
            sinh();

    }
    for(auto x:v){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<v.size();


}
