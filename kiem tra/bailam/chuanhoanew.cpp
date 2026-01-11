#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string s){
    s[0]=toupper(s[0]);
}
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    vector<string>v;
    string tmp;
    stringstream ss(s);
    while(ss>>tmp){
        v.push_back(tmp);
    }
    for(int i=0;i<v.size();i++){
        chuanhoa(v[i]);
    }
    for(int i=0;i<v.size()-1;i++){
            if(i!=v.size()-2) cout<<v[i] ;
    else cout<<v[i]<<",";

    }
    cout<<v[v.size()-1];
}
