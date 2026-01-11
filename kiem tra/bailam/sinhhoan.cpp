#include<bits/stdc++.h>
using namespace std;
int n,a[100];

void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=n-i+1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
            cin>>n;
            khoitao();
            do{
                for(int i=1;i<=n;i++){
                    cout<<a[i];
                }
                cout<<" ";
            }while(prev_permutation(a+1,a+n+1));
            cout<<endl;


    }




    }


