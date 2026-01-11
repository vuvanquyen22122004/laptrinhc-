#include<bits/stdc++.h>
using namespace std;
void check(string s){
    for(auto x:s){
        if(isanpha(x)) s.erase(x);
    }
    for(auto y:s){
        cout<<y<<" ";
    }
}

int main(){
    string s;
    cin>>s;
    check(s);



}
