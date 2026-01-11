#include<bits/stdc++.h>
using namespace std;

vector<long long>v;
long long a[501];
int ok;


void sinh(string &s){
    int i=s.size()-1;
    while(i>=0&&s[i]=='9'){
        s[i]='0';
        i--;
    }
    if(i==-1) ok=0;
    else{
        s[i]='9';
    }
}
int main(){



    string s(12,'0');
    ok=1;
    sinh(s);
    while(ok){
        v.push_back(stoll(s));
        sinh(s);
    }
    for(int i=1;i<=501;i++){
        for(auto x:v){
            if(x%i==0){
                a[i]=x;
                break;
            }
        }
    }
     int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    cout<<a[n]<<endl;



}
}
