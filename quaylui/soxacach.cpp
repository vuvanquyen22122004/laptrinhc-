#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[11];
long long b[100];
int ok;
bool check(){
    
    for(int i=1;i<n;i++){
        if(abs(a[i+1]-a[i])==1) return false;
    }
    return true;
}
void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void trys(int i){
    for(int j=1;j<=n;j++){
        if(b[j]==0){
            b[j]=1;
            a[i]=j;
            if(i==n){
                if(check()){
                    ok=1;
                    in();

                }

            }
            else{
                trys(i+1);
            }
            b[j]=0;
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ok=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        trys(1);
        if(ok=0){
            continue;
        }


    }
}