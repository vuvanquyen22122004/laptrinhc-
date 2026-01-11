#include<bits/stdc++.h>
using namespace std;
void check(string a,string b){
    int len=max(a.size(),b.size());
    if(a.size()<len){
        for(int i=0;i<len-a.size();i++){
                a[i]='0';

        }
    }
    else if(b.size()<len){
        for(int i=0;i<len-b.size();i++){
            b[i]='0';
        }
    }
    string c;
    if(a>b) swap(a,b);
    int nho=0;

    for(int i=len-1;i>=0;i--){
            int tmp=a[i]-b[i]-nho;
            if(tmp<0){
                nho=1;
                c[i]=tmp+10;
            }
            else{
                c[i]=tmp;
                nho=0;
            }

    }
    for(int i=0;i<c.size();i++){
        cout<<c[i];
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
            string s1,s2;
            cin>>s1>>s2;
            check(s1,s2);

    }

}
