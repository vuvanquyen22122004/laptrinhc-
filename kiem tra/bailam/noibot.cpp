#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
   while(1){
        int ok=1;

    for(int i=0;i<n-1;i++){

        if(a[i+1]<a[i]){
            swap(a[i+1],a[i]);
   ok=0;
        }
   }
   if(ok) break;
   cout<<"Buoc "<<j+1<<": ";
   j++;
for(auto x:a){
    cout<<x<<" ";

}
cout<<endl;

}
}
