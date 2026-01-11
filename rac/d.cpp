#include<bits/stdc++.h>
using namespace std;
vector<string>v;
string a[100];int n,k;
int b[100];
void in(){
    for(int i=1;i<=k;i++){
        cout<<v[b[i]-1]<<" ";
    }
    cout<<endl;
}
void trys(int i){
    for(int j=b[i-1]+1;j<=v.size()-k+i;j++){
        b[i]=j;
        if(i==k) in();
        else{
            trys(i+1);
        }
    }
}
int main(){

    cin>>n>>k;
    set<string>s;


    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }

    for(auto x:s){
        v.push_back(x);
    }
    trys(1);


}

