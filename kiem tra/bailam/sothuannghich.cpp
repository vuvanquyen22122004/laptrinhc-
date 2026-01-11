#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    string t=s;
    reverse(s.begin(),s.end());
    if(t==s) return true;
    return false;
}
int main(){
    string s;
    cin>>s;
    if(check(s)) cout<<"YES";
    else cout<<"NO";

}
