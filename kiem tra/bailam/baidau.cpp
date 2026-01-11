#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   char a[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin>>a[i][j];
   }
   }
   map<char,int>mp;
   for(int h=0;h<m;h++){
    int i=0;
    if(a[i][j]==)
   }
   for(int i=1;i<n;i++){
    for(int j=0;j<m;j++){
        if ((a[i][j]=='#' && a[i-1][j]=='#')||(a[i][j]=='#'&&a[i][j-1]=='#')){
            mp[a[i][j]]=mp[a[i][j]];
        }
        else mp[a[i][j]]++;
    }
   }
   cout<<mp['#'];

}
