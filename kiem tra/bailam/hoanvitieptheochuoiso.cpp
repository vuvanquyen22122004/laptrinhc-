#include<bits/stdc++.h>
using namespace std;
void sinh(string &a){
    int i=a.size()-2;
    while(i>=0&&a[i]>=a[i+1]){
            i--;

    }
    if(i==-1){
        cout<<"BIGGEST"<<endl;

    }
    else{
        int r=a.size()-1;
            while(a[r]<=a[i]){
                r--;
            }
            swap(a[r],a[i]);
           int l=i+1,h=a.size()-1;
           while(l<=h){
            char x=a[l];
            a[l]=a[h];
            a[h]=x;
            l++;
            h--;
           }
            cout<<a<<endl;

    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<n<<" ";
    sinh(s);


    }
}
