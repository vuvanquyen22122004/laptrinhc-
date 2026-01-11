#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){


    int t;
    cin>>t;
    int a[t][t];
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            cin>>a[i][j];
        }
    }

    for(int j=0;j<t;j++){
        cout<<a[0][j]<<" ";
    }
    cout<<endl;
    for(int i=1;i<t-1;i++){
        for(int j=0;j<t;j++){
            if(j==0||j==t-1){
                cout<<a[i][j]<<" ";
            }
            else cout<<"  ";

        }
        cout<<endl;
    }
    for(int j=0;j<t;j++){
        cout<<a[t-1][j]<<" ";
    }

    cout<<endl;
    }



}
