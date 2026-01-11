#include<bits/stdc++.h>
using namespace std;
void solve(string s){
   int a[26]={0};
    for(char x:s){
        a[x-'a']++;

    }
    int maxi=*max_element(a,a+26);

     if(s.size()-maxi>=maxi-1)cout<<"1"<<endl;
    else cout<<"0"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);

    }
}
