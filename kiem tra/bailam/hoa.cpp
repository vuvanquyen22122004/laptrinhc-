#include<bits/stdc++.h>
using namespace std;
void fibo(){
    int a[1001];
    for(int i=0;i<=1000;i++){
        a[i]=0;
    }
     a[0]=0,a[1]=1;

    for(int i=2;i<=1000;i++){
        a[i]=a[i-1]+a[i-2];
        }

    }


int main(){
    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        fibo();





        for(int i=0;i<n;i++){



           cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
