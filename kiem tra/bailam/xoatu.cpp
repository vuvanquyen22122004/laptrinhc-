#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    stringstream ss(a);
    string tmp;
    vector<string>v;

    while(ss>>tmp){
            if(tmp!=b){
                v.push_back(tmp);
            }

    }
    for(auto x:v){
        cout<<x<<" ";
    }


}
