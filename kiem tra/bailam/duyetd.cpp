#include<bits/stdc++.h>
using namespace std;
int check(int n){
    int a=n;
    int sum=0;
    while(n>=10){
        int x=n%10;
        sum=sum*10+x;
        n/=10;
    }
    sum=sum*10+n;
    if(sum==a) return 1;
    else return 0;
}
int main(){
   int n;
   cin>>n;
   if(check(n)) cout<<"yes";
   else cout<<"no";
}
