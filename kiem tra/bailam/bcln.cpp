#include<bits/stdc++.h>

using namespace std;

int ucln(int a,int b){
    if(a==0||b==0) return a+b;
    while(b){
        int x=b%a;
        a=b;
        b=x;
    }
    return a;
}
int bcnn(int a,int b){
    return a*b/ucln(a,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<bcnn(a,b);
}
