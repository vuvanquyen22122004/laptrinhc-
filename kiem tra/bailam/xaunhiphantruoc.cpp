#include<bits/stdc++.h>
using namespace std;

void check(string a){
    int i=a.size()-1;


 while(i>=0&&a[i]=='0'){
        a[i]='1';
        i--;
    }


        a[i]='0';

   cout<<a;
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        check(a);
    }
}
