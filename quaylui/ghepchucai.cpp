#include<bits/stdc++.h>
using namespace std;
char c;
int n;
vector<char>v;
string a;
int d[100];
void in(){
    for(auto x:a){
        cout<<x;
    }
    cout<<endl;
}
bool check(){
    for(int i=1;i<n-1;i++){
        if(a[i]=='E'||a[i]=='A'){
            if((a[i-1]!='E'&&a[i-1]!='A')&&(a[i+1]!='E'&&a[i+1]!='A')) return false;
        }
    }
    return true;
}


void trys(int i){
    for(int j=0;j<n;j++){
            if(d[j]==0){
                d[j]=1;
                a[i]=v[j];
                if(i==n-1){
                    if(check()) in();

                }
                else{
                    trys(i+1);
                }
                d[j]=0;


            }
    }


}
int main(){
    cin>>c;
     n=c-64;
     a.resize(n);

     for(char h='A';h<=c;h++){
        v.push_back(h);
     }
     trys(0);

}
