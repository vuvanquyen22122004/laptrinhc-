#include<bits/stdc++.h>
using namespace std;
set<string> convert(string s){
    stringstream ss(s);
    string tmp;
    set<string>se;
    while(ss>>tmp){
            se.insert(tmp);

    }
    return se;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        set<string>s1=convert(a);
        set<string>s2=convert(b);
        for(string x:s1){
            if(s2.find(x)==s2.end()){
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
}
