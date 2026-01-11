#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],k,n,ok;
bool check(){
    int sum=0;
    for(int i=1;i<=n;i++){
            if(a[i]==1)
        sum+=b[i];
    }
    if(sum==k) return true;
    return false;
}


void trys(int i){
    for(int j=1;j>=0;j--){
        a[i]=j;
        vector<int>v;

        if(i==n){
            if(check()!=false){
                    ok=0;

                for(int h=1;h<=n;h++){
                        if(a[h]){
                                v.push_back(b[h]);


                }
                }
               cout<<"[";
               for(int z=0;z<v.size();z++){
                if(z==v.size()-1) cout<<v[z];
                else cout<<v[z]<<" ";
               }
               cout<<"]";
               cout<<" ";


        }
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
            cin>>n>>k;
            ok=1;
            for(int i=1;i<=n;i++){
                cin>>b[i];
            }sort(b+1,b+n+1);

            trys(1);
           if(ok==1) cout<<"-1";
            cout<<endl;



            }


    }

