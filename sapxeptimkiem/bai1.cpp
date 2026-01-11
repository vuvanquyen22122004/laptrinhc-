#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int a[100],giatri[100];
    float f[100];
    int notcheck[100];
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>a[i]>>giatri[i];
        notcheck[i]=1;
    }
    for(int i=1;i<=n;i++){
        f[i]=(float)giatri[i]/a[i];
    }
    int sum=0;
    int imax;
    int ok=1;
     float maxi;
    while(ok){
            maxi=0;
            imax=0;

        for(int i=1;i<=n;i++){

                if(notcheck[i]&&maxi<f[i]){
                    imax=i;
                    maxi=f[i];
                }


        }

        if(sum+a[imax]<=m){
                cout<<imax<<" ";
            sum+=a[imax];
        }
        if(sum==m||imax==0){
            ok=0;
        }
        notcheck[imax]=0;


    }
    cout<<sum<<endl;



}
