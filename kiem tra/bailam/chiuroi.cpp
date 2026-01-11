#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,msv,ns,lop;
	float diem;
};
void thuong(string &s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
void chuanhoa(string &s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
void nhap(SinhVien ds[],int n){
   getchar();

	for(int i=0;i<n;i++){
            vector<string>v;
        getline(cin,ds[i].ten);
		getline(cin,ds[i].lop);

		getline(cin,ds[i].ns);
		if(ds[i].ns[1]=='/') ds[i].ns.insert(0,"0");
		if(ds[i].ns[4]=='/') ds[i].ns.insert(3,"0");
		cin>>ds[i].diem;
		getchar();
		}
}
void kt(string &s){

    string tmp;
    stringstream ss(s);
    while(ss>>tmp){
            chuanhoa(tmp);
    cout<<tmp<<" ";

    }
}
void in(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		string s;
		if(i<9) s="B20DCCN00";
		else s="B20DCCN0";
		cout<<s<<i+1<<" ";
		kt(ds[i].ten);
		cout<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].diem<<endl;
	}
}


int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;

    nhap(ds, N);
    in(ds, N);
    return 0;
}
