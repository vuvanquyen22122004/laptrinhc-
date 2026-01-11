#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],n;
void in(){
    for(int i=1;i<=n;i++){
        cout<<char(64+a[i]);
    }
    cout<<" ";
}
void trys(int i){
    for(int j=1;j<=n;j++){
            if(b[j]==0){
                a[i]=j;
                b[j]=1;
                if(i==n) in();
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
            string s;
    cin>>s;
    n=s.size();
    trys(1);
    cout<<endl;


    }


}
