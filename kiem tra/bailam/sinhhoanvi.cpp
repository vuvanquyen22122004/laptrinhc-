#include<bits/stdc++.h>
using namespace std;
int m,a[100],n;
bool check(){
    for(int i=m;i>=1;i--){
        if(a[i]!=n-m+i){
           return false;
        }


    }
    return true;

}
void sinhhoanvi(){
    int i;
    for( i=m;i>=1;i--){
        if(a[i]!=n-m+i){

            break;
        }
    }
    a[i]=a[i]+1;
         for(int j=i+1;j<=m;j++){
            a[j]=a[i]+j-i;
        }
    }



void ktra(){
    for(int i=1;i<=m;i++){
        a[i]=i;
    }
    bool stop=false;
    while(stop==false){
        for(int i=1;i<=m;i++){
            cout<<a[i];
        }
        cout<<endl;
        if(check()==false) sinhhoanvi();
        else stop=true;
    }
}
int main(){cin>>n>>m;
     ktra();

}
