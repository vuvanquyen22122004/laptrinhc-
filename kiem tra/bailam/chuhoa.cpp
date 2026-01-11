#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        char x;
        cin>>x;
        if(x>=65&&x<=96){
            x+=32;
            cout<<(char)x<<endl;
        }
        else{
            x-=32;
            cout<<(char)x<<endl;
        }
    }
}
