#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
    stringstream ss(s);
    string tmp;
    vector<string>v;
    while(ss>>tmp){
        v.push_back(tmp);
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=1;j<v[i].size();j++){
            v[i][j]=tolower(v[i][j]);
        }
    }
    for(int i=0;i<v.size()-1;i++){
            if(i!=v.size()-2){


        cout<<v[i]<<" ";

    }
    else cout<<v[i]<<", ";
}

cout<<v[v.size()-1];
}
