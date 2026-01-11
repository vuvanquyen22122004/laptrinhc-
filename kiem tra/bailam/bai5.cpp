#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
       getline(cin,s);
        int ok=1;

        for(int i=0;i<s.size()-1;i++){

      if(abs(s[i]-s[i+1])!=1)

            {
                cout<<"NO"<<endl;
                ok=0;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
}
}
