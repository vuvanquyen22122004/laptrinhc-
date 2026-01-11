#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v[100];
    int cnt=0;

    v[cnt].push_back(a[0]);

        for(int i=1;i<n;i++){
            int x=a[i];
            int pos=i-1;
            while(pos>=0&&x<a[pos]){
                a[pos+1]=a[pos];
                pos--;
            }
            cnt++;
            a[pos+1]=x;

            for(int j=0;j<=i;j++){
                    v[cnt].push_back(a[j]);

            }
        }


                while(cnt>=0){
                        cout<<"Buoc "<<cnt<<":"<<" ";


            for(auto y:v[cnt]){
                cout<<y<<" ";

            }
            cnt--;
        cout<<endl;
        }
}





