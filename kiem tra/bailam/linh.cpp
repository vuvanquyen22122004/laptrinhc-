#include<bits/stdc++.h>
using namespace std;
int kt(int n){
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){

        int res=0;
        while(n%i==0){
           res++;
            n/=i;


        }
       if(res==1) dem++;
       if(res>=2) return 0;


}
if(n!=1) dem++;
if(dem!=3) return 0;
return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<kt(n)<<endl;
    }
}
