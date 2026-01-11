#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,ok;
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1&&a[i]!=0){
        a[i]=0;
        i--;

    }
    if(i==0) ok=0;
    else {
        a[i]=1;
    }
}
bool check(){
    int dem=0,res=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){

         dem++;
        if(dem==k) res++;
        if(dem>k) return false;


    }
    else dem=0;

}
return res==1;
}
int main(){

    cin>>n>>k;
    ok=1;
    khoitao();
    vector<string>v;

    while(ok){


    if(check()){
            string s;

        for(int i=1;i<=n;i++){
            if(a[i]==0) s+="A";
            else s+="B";
        }


        v.push_back(s);




    }
    sinh();
}
cout<<v.size()<<endl;
for(auto x:v){
    cout<<x<<endl;
}
}
