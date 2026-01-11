#include<bits/stdc++.h>
using namespace std;
bool check(string s){
   string y=s;
   reverse(s.begin(),s.end());
    if(y==s) return true;
    else return false;
}
bool test(string s){
    for(int i=0;i<s.size();i++){
        if((s[i]-'0')%2!=0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s)&&test(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
