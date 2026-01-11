#include<bits/stdc++.h>
using namespace std;
int n,ok,cnt,a[100];
void khoitao(){
    cnt=1;
    a[1]=n;

}
void sinh(){
    int i=cnt;
    while(i>=1&&a[i]==1){
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]--;

        int d=cnt-i+1;
        cnt=i;
        int r=d/a[i];
        int l=d%a[i];
        if(r){
        while(r>=1){
            cnt++;
            a[cnt]=a[i];
            r--;
        }
        }
        if(l){
            cnt++;
            a[cnt]=l;

        }

    }

    }

int main(){
    int t;
    cin>>t;
    while(t--){

        cin>>n;
        ok=1;
        khoitao();
        while(ok){
                cout<<"(";

            for(int i=1;i<=cnt;i++){
                    if(i<cnt)
                cout<<a[i]<<" ";
            if(i==cnt) cout<<a[i];

            }
            cout<<")";
            cout<<" ";

        sinh();
        }
        cout<<endl;

    }

}
