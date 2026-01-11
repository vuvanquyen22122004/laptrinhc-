#include<bits/stdc++.h>
using namespace std;
bool solve(string s){
    stack<char>v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') v.push(s[i]);
        else{
            if(v.empty()) return false;
            else{
                char ch = v.top();
                v.pop();
                if(ch=='('&&s[i]==')');
                 else return false;

            }
        }
    }
   if(v.empty()) return true;
   else return false;
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s)<<endl;


}
