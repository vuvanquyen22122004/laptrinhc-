#include<bits/stdc++.h>
using namespace std;
class sinhvien{
    friend class giaovien;
    private:

    string ten,lop;
    double gpa;
    static int dem;
    public:
       void nhap();
        void  in();
        friend void chuanhoa(sinhvien &y);






};
class giaovien{
    private:

        string khoa;
    public:
        void update(sinhvien &);

};
void giaovien::update(sinhvien &x){
    x.gpa=3.0;


}
void chuanhoa(sinhvien &y){
    string res="";
    stringstream ss(y.ten);
    string token;
    while(ss>>token){
            token[0]=toupper(token[0]);

        for(int i=1;i<token.size();i++){
            token[i]=tolower(token[i]);
        }
        res+=token;
        res+=" ";

    }

    res.erase(res.size()-1);
    y.ten=res;
}



void sinhvien::nhap(){

    getline(cin,ten);
    getline(cin,lop);
    cin>>gpa;
    cin.ignore(1);

}
void sinhvien::in(){
    cout<<ten<<" "<<lop<<" "<<gpa<<endl;

}


int main(){
   int n;
   cin>>n;
   cin.ignore(1);
   sinhvien a[n];
   giaovien y;


   for(int i=0;i<n;i++){

    a[i].nhap();
    y.update(a[i]);
   }
   for(int i=0;i<n;i++){
    chuanhoa(a[i]);
   }


   for(int i=0;i<n;i++){
    a[i].in();
   }

}
