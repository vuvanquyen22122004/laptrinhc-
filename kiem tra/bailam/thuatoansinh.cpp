#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100];
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int r=n;
    while(r>=1&&a[r]!=0){
            a[r]=0;
            r--;

    }
    if(r==0) ok=0;
    else{
        a[r]=1;
    }
}
bool isThuanNghich() {
   int l=1;
   int r=n;
   while(l<=r){
    if(a[l]!=a[r]) return false;
    l++;
    r--;
   }
   return true;
}
int main(){
    cin>>n;
    khoitao();
    ok=1;
    while(ok){
        if(isThuanNghich()){
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        sinh();


    }

}
