#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        string s;
        getline(cin,s);
        int l=0;
        int r=s.size()-1;
        int ok=1;

           while(l<=r){
            if(s[l]%2!=0||s[l]!=s[r]){
                cout<<"NO"<<endl;
                ok=0;
                break;

            }
            l+=1;
            r-=1;
           }
           if(ok) cout<<"YES"<<endl;
        }



}

