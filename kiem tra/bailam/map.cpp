#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mp;
    mp[100]=200;
    mp.insert({200,300});
   for(auto x:mp){
    cout<<x.first<<" "<<x.second<<endl;
   }
}

