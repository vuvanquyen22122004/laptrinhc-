#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string ten,lop,ns,ma;
    float gpa;
   void chuanhoa(string &s){
       string s;
       for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
       }
       stringstream ss(s);
       string tmp;
       vector<string>v;
       while(ss>>tmp){
        v.push_back(tmp);
       }
       for(int i=0;i<v.size();i++){
        v[i][0]=toupper(v[i][0]);
       }



   }

    friend istream &operator>>(istream &in,SinhVien &a){
        a.ma="B20DCCN001";
        getline(in,a.ten);

        getline(in,a.lop);
        getline(in,a.ns);
        in>>a.gpa;
       if(a.ns[1]=='/') a.ns.insert(0,"0");
        if(a.ns[4]=='/') a.ns.insert(3,"0");

        return in;

    }
    friend ostream &operator<<(ostream &out,SinhVien &a){

        out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
        return out;
    }

};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
