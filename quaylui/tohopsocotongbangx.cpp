#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100],x[100];
int sum,ok,cnt;
void trys(int i,int start){
    for(int j=start;j<=n;j++){

      x[i]=a[j];



      sum+=x[i];
        if(sum==k&&i<=n){
            cnt++;
            ok=1;
            cout<<"[";
            for(int h=1;h<=i;h++){
                    if(h<i)
                cout<<x[h]<<" ";
                else if(h==i){
                    cout<<x[h];
                }
            }
            cout<<"]";
            if(x[i]!=k) cout<<" ";
           
        }
        else if(sum<k){


            trys(i+1,j);
        }
        sum-=x[i];
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sum=0;
        ok=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        trys(1,1);
        
        if(ok==0) cout<<"-1"<<endl;
        cout<<endl;

    }
}
