#include<bits/stdc++.h>
using namespace std;
int n,a[100],k;
void in(){
    for(int i=1;i<=k;i++){
            cout<<(char)(64+a[i]);
}
cout<<endl;
}
void trys(int i){
    for(int j=a[i-1];j<=n;j++){
        a[i]=j;
        if(i==k){
            in();
        }
        else{
            trys(i+1);
        }
    }
}
int main(){
    char c;
    cin>>c>>k;
    a[0]=1;
    n=(int)c-64;
    trys(1);

}
