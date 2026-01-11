#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100];
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int r=n;
    while(r>=1&&a[r]!=0){
            a[r]=0;
            r--;

    }
    if(r==0) ok=0;
    else{
        a[r]=1;
    }
}
bool check(){
    int dem0=0,dem1=0;
    if(a[1]!=1||a[n]!=0) return false;

    else{
            for(int i=1;i<=n;i++){
                if(a[i]==1) dem1++;
                else dem1=0;
                if(a[i]==0) dem0++;
                else dem0=0;
                if(dem1==2||dem0>3) return false;

            }

    }
    return true;
}

int main(){
    cin>>n;
    khoitao();
    ok=1;
    while(ok){
        if(check()){
            for(int i=1;i<=n;i++){
                if(a[i]==1) cout<<"8";
                else cout<<"6";
            }
            cout<<endl;
        }
        sinh();


    }

}
