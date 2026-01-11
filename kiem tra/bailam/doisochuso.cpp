#include<bits/stdc++.h>
using namespace std;
int a[100];
void solve(string s){
    int i=s.size()-2;
    int j=s.size()-1;
    while(s[i]<=s[i+1]&&i>=0){
        i--;
    }

    if(i==-1){
        cout<<"-1"<<endl;
        return ;
    }


        while(s[i]<=s[j]||s[j]==s[j-1]&&s[j]<s[i]){
            j--;
        }

    swap(s[i],s[j]);
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<endl;
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
