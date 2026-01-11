#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0||b==0) return a+b;
    while(b){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);

}
