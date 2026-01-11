#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>v[100];
       memset(v,0,sizeof(v));
        int cnt=0;


            for(int i=1;i<n;i++){
                    int pos=i;
                    int j=i+1;
                    while(j<=n){
                        if(a[j]<a[pos]){
                            swap(a[j],a[pos]);
                        }
                        j++;
                    }
                    cnt++;

                    for(int h=1;h<=n;h++){
                        v[cnt].push_back(a[h]);
                    }


            }

            while(cnt>0){
                cout<<"Buoc "<<cnt<<":"<<" ";
                for(auto y:v[cnt]){
                    cout<<y<<" ";
                }
                cout<<endl;
                cnt--;
            }


        }


    }

