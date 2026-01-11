#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,y;
string b[100];

 vector<string>s;

void in(){
    for(int j=1;j<=k;j++){
        cout<<s[a[j]-1]<<" ";
    }
    cout<<endl;
}
void trys(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
            a[i]=j;
    if(i==k) in();
    else{
        trys(i+1);
    }

    }
}
int main(){
   cin>>n>>k;
    set<string>v;

    for(int h=0;h<n;h++){
        cin>>b[h];
        v.insert(b[h]);
    }


    for(auto x:v){
        s.push_back(x);
    }
    n=s.size();
    trys(1);
    cout<<endl;

}
