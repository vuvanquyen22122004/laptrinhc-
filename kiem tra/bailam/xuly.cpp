#include<bits/stdc++.h>
using namespace std;
void xuly(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int x[1000],y[1000];
    for(int i=0;i<a.size();i++){
            x[i]=a[i]-'0';
    }
    for(int i=0;i<b.size();i++){
        y[i]=b[i]-'0';
    }
    for(int i=b.size();i<a.size();i++){
            y[i]=0;
    }
    int nho=0;
    int z[1000];
    int s=0;
    for(int i=0;i<a.size();i++){
        int tmp=a[i]-b[i]-nho;
        if(tmp<0){
                z[s++]=tmp+10;
        nho=1;

        }
    }
    int ok=0;
    for(int i=a.size();i>=0;i--){
        if(z[i]&&ok==0){
            ok=1;
        }
        if(ok) cout<<z[i];
    }
    if(ok==0) cout<<"0";

}
int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
       string c,d;
       getline(cin,c);
       getline(cin,d);
       if(c.size()>d.size()||c.size()==d.size()||c>d){
        xuly(c,d);
       }
       else xuly(d,c);
    }
}

