#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    string tmp;
    stringstream ss(s1);
    vector<string>v;
    while(ss>>tmp){
        if(tmp!=s2) v.push_back(tmp);
    }
    for(auto x:v){
    cout<<x<<" ";

}



}
