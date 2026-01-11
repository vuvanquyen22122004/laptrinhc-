#include<bits/stdc++.h>
using namespace std;
int sum,n;
int d;int ok;
int x[100];int b[100];
int a[100];
void trys(int i){
    for(int j=1;j<=n;j++){
        if(b[j]==0){
            b[j]=1;
            x[i]=a[j];
            d+=x[i];
            if(d==sum-d&&i<=n){
                
                ok=1;
                return ;
            }
           else if(d<sum-d){
                trys(i+1);

           }
            b[j]=0;
            d-=x[i];

        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        sum=0;
        ok=0;
       
        d=0;
        cin>>n;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        trys(1);
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
