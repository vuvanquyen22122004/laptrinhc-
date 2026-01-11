#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ma,ten,lop,ns;
    float gpa;
};
void chuanhoa(string s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    string tmp;
    vector<string>v;
    stringstream ss(s);
    while(ss>>tmp){
        v.push_back(tmp);
    }
    for(int i=0;i<v.size();i++){
        v[i][0]=toupper(v[i][0]);
    }
    for(auto x:v) cout<<x<<" ";





}

void nhap(SinhVien a[],int x){
    cin.ignore(1);

    for(int i=0;i<x;i++){

    getline(cin,a[i].ten);
    getline(cin,a[i].lop);
    getline(cin,a[i].ns);
    cin>>a[i].gpa;
    cin.ignore(1);
}
}
void in(SinhVien a[],int x){

    string s;

    for(int i=0;i<x;i++){


    if(a[i].ns[1]=='/') a[i].ns.insert(0,"0");
    if(a[i].ns[4]=='/') a[i].ns.insert(3,"0");

    if(i<9) s="B20DCCN00";
    else s="B20DCCN0";
    cout<<s<<i+1<<" ";
    chuanhoa(a[i].ten);
    cout<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa;
    cout<<endl;

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
