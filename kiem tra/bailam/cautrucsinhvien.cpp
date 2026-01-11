#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string ten,gt,ns,diachi,mst,ngay;
};
void nhap(NhanVien &a){
    cin.ignore(1);
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.ns);
    getline(cin,a.diachi);
    getline(cin,a.mst);
    cin>>a.ngay;
}
void inds(NhanVien a[],int n){
    string s;

    for(int i=0;i<n;i++){
            s=to_string(i+1);
        while(s.size()<5){
            s="0"+s;
}
    cout<<s<<" "<<a[i].ten<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].diachi<<" "<<a[i].mst<<" "<<a[i].ngay<<endl;
    }



}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
