#include<bits/stdc++.h>
using namespace std;
int a[100],b[100];
string s;
void in(){
    for(int i=1;i<=s.size();i++){
        cout<<(char)(64+b[i]);
    }
    cout<<" ";
}
void trys(int i){
    for(int j=1;j<=s.size();j++){
            if(a[j]==0){
            a[j]=1;
        b[i]=j;
        if(i==s.size()) in();
        else{
            trys(i+1);
        }
        a[j]=0;
    }
}
}
int main(){
    int t;
    cin>>t;
    while(t--){

        cin>>s;
        trys(1);
        cout<<endl;

    }

}
