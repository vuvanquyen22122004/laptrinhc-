#include<bits/stdc++.h>
using namespace std;
set<string> check(string s){
    string tmp;
    stringstream ss(s);
    set<string>res;
    while(ss>>tmp){
            res.insert(tmp);

    }
    return res;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1;
        string s2;
        getline(cin,s1);
        getline(cin,s2);
        set<string>se1=check(s1);
        set<string>se2=check(s2);
        for(auto x:se1){
            if(se2.find(x)==se2.end()){
                cout<<x<<" ";
            }
        }
        cout<<endl;

    }
}
