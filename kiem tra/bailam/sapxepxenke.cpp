#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    int idex;

    for(int i=0;i<n-1;i++){
        idex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[idex]){
              idex=j;
            }
        }
        swap(a[i],a[idex]);
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        selectionsort(a,n);
        int left=0,right=n-1;
        while(left<=right){
            if(left<right) cout<<a[right]<<" "<<a[left]<<" ";
            else{
                cout<<a[left];
                break;
            }
            left++;
            right--;
        }


    }
}
