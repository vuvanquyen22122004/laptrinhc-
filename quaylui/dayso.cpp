#include<bits/stdc++.h>
using namespace std;
int x[100],a[100],n,h;
void in(){
    cout<<"[";
    for(int i=1;i<n;i++){
            if(i==n) cout<<x[i];
            else cout<<x[i]<<" ";


    }
    cout<<"]";
    cout<<endl;
}
void trys(int i){
    for(int j=i;j<n;j++){
        x[i]=a[j]+a[j+1];
        if(j==n-1){
                in();
                n--;

        }
        else{
            trys(i+1);
        }

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        trys(1);
    }

}
