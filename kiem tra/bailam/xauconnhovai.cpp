#include<bits/stdc++.h>
using namespace std;
void solve(string s1,string s2){
    int a[256],b[256],cnt,left=0;
    for(int i=0;i<s2.size();i++){
        b[s2[i]]++;
    }
    int ans=INT_MAX,res;

    for(int i=0;i<s1.size();i++){

       a[s1[i]]++;
       if(a[s1[i]]<b[s1[i]]&&s2.find(s1[i])!=s2.end()){
        cnt++;

       }
        if(cnt==s2.size()){
              while(a[s1[left]]>b[s1[left]||b[s1[left]]==0){
                left--;
                a[s1[left]]--;
              }



        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
    }
}
