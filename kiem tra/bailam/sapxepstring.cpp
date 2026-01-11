#include<bits/stdc++.h>
using namespace std;
bool check(string a,string b){
    string s1=a+b;
    string s2=b+a;
    return s1>s2;

}
int main(){
    int t;
    cin>>t;

    while(t--){
            int n;
    cin>>n;
    cin.ignore(1);
       string s[n];

        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s,s+n,check);
        for(auto x:s){
            cout<<x<<" ";
        }
        cout<<endl;


    }
}
