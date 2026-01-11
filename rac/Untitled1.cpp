#include<bits/stdc++.h>
using namespace std;
vector<char>v;
vector<string>s;
int k; char c;
int pos;
void trys(int pos,int start){
    if(pos==k){
        for(auto x:s){
            cout<<x;
        }
        cout<<endl;
        return ;
    }
    for(int i=start;i<v.size();i++){
        s[pos]=v[i];
        trys(pos+1,i);
    }
}
int main(){
    cin>>c>>k;
    for(char i='A';i<=c;i++){
        v.push_back(i);
    }
    s.resize(k);
    trys(0,0);
}
