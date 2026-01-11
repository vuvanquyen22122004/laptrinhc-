#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=0;
    while(1){
        int ok=1;

        for(int i=0;i<n-1;i++){

                if(a[i+1]<a[i]){
                    swap(a[i],a[i+1]);
                    ok=0;
                }
            }

            if(ok) break;
            cout<<"Buoc "<<res+1<<": ";

            res++;
            for(auto x:a){
                cout<<x<<" ";
            }
            cout<<endl;

        }
    }



