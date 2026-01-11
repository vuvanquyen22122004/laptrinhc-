#include<bits/stdc++.h>
using namespace std;
struct NhanVien {
	string msv,ten,gt,ns,diachi,ms,ngay;
};

void nhap(NhanVien &a){
    cin.ignore();

    getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.ns);
	getline(cin,a.diachi);
	getline(cin,a.ms);
	cin>>a.ngay;


}
void inds(NhanVien a[],int n){
	for(int i=0;i<n;i++){
		string s = to_string(i + 1);
	while(s.size()<5) s="0"+s;
	cout<<s<<" ";
	cout<<a[i].ten<<" ";
	cout<<a[i].gt<<" ";
	cout<<a[i].ns<<" ";
	cout<<a[i].diachi<<" ";
	cout<<a[i].ms<<" ";
	cout<<a[i].ngay;
	cout<<endl;


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
