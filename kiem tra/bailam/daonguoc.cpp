#include<bits/stdc++.h>
using namespace std;
int check(string s){
    string t=s;
    reverse(s.begin(),s.end());
    if(t!=s) return 0;
    for(char x:s){
        if((x-'0')%2!=0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s)) cout<<"YES"<<endl;
        else cout<<"no"<<endl;

    }
}
