#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    getline(cin,s);
    getline(cin,a);
    string tmp;
    stringstream ss(s);
    int cnt=0;
    vector<string>v;
    while(ss>>tmp){
            v.push_back(tmp);

    }
    for(auto x:v){
        if(x!=a){
                cout<<x<<" ";

        }
    }

}
