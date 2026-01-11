#include<bits/stdc++.h>
using namespace std;
int a[100],b[100]={0},n;
void in(){
    for(int i=1;i<=n;i++){
        cout<<(char)(64+b[i]);
    }
    cout<<endl;
}
bool check(){
    for(int i=1;i<n;i++){
            if(b[i]==1||b[i]==5){
                if((b[i-1]!=1&&(b[i-1]!=5))&&(b[i+1]!=1&&b[i+1]!=5)) return false;
            }
    }
    return true;
}
void trys(int i){
    for(int j=1;j<=n;j++){
        if(a[j]==0){
            a[j]=1;
            b[i]=j;
            if(i==n) {
                if(check()){
                    in();
                }

            }
            else{
                trys(i+1);
            }
            a[j]=0;
        }
    }

}
int main(){
    char c;
    cin>>c;

    n=(char)c-64;

    trys(1);


}
