#include<bits/stdc++.h>
using namespace std;
int check(int a,int b){
   return a>b;
}
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    sort(a,a+t,check);
    for(int x:a){
        cout<<x<<" ";
    }
}
