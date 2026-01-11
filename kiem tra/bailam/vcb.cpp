#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string ten,lop;
    float gpa;
    void nhap(){
        getline(cin,ten);
        getline(cin,lop);
        cin>>gpa;
    }
    void in(){
        cout<<ten<<" "<<lop<<" "<<fixed<<setprecision(2)<<gpa;
    }
};
void nhap(sinhvien a[],int n){
    for(int i=0;i<n;i++){
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        cin>>a[i].gpa;
        cin.ignore(1);
    }
}
bool cmp(sinhvien a,sinhvien b){
    return a.gpa>b.gpa;
}
void lkds(sinhvien a[],int n){
    vector<sinhvien>v;
    for(int i=0;i<n;i++){
        if(a[i].gpa>=2.5) v.push_back(a[i]);

    }
    sort(v.begin(),v.end(),cmp);
    for(sinhvien x:v){
        x.in();

}

}
int main(){
    int n;
    cin>>n;
   sinhvien a[n];
   cin.ignore(1);
   nhap(a,n);
   lkds(a,n);

}
