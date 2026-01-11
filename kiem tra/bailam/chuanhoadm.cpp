#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    string tmp;
    stringstream ss(s);
    vector<string>v;
    while(ss>>tmp){
        v.push_back(tmp);
    }
    for(int i=0;i<v.size();i++){
        v[i][0]=toupper(v[i][0]);
    }

    for(int i=0;i<v.size()-1;i++){
        if(i==(v.size()-2)){
            cout<<v[i]<<",";
        }
        else cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1];
}

