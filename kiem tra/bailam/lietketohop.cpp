#include<bits/stdc++.h>
using namespace std;
int ok,n,k,a[100];
void khoitao(){
    for(int i=0;i<k;i++){
            a[i]=i;


    }
}
void sinh(set<int>se){
    int i=k-1;
    while(i>=0&&a[i]==se.size()-k+i){
        i--;
    }
    if(i==-1) ok=0;
    else{
        a[i]++;
        for(int j=i+1;j<k;j++){
            a[j]=a[j-1]+1;
        }
    }
}

int main(){
    cin>>n>>k;
    set<int>se;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    vector<int>vcl;
    for(auto x:se){
        vcl.push_back(x);
    }
    khoitao();
    ok=1;
    vector<vector<int>>v;

    while(ok){
            vector<int>vc;
            for(int i=0;i<k;i++){
                    vc.push_back(*(vcl.begin()+a[i]));

            }

    v.push_back(vc);
    sinh(se);


    }
    for(auto y:v){
        for(auto z:y){
            cout<<z<<" ";
        }
        cout<<endl;
    }

}
