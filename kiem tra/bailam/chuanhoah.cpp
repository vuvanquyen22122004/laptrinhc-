#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    for(int i=0;i<s.size();i++){
        s[0]=toupper(s[0]);
    }
}
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    vector<string>a;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){

        a.push_back(tmp);
    }
    for(int i=0;i<a.size();i++){
           chuanhoa(a[i]);


    }
    for(int i=0;i<a.size()-1;i++){
      cout<<a[i];
    }

}
