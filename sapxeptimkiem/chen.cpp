#include<bits/stdc++.h>
using namespace std;
void insertsort(int a[],int n){
    for(int i=1;i<n;i++){
        int x=a[i];
        int j=i-1;
        while(j>=0&&a[j]>x){
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=x;
    }
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertsort(a,n);
    for(auto y:a){
        cout<<y<<" ";
    }


}
