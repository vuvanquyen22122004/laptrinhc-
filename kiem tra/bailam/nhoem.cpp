#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	string ten;
	double gpa;
	string diachi;
	string msv;
	sinhvien(){
	    ten="vu van quyen";
	    gpa=3.3;
	    diachi="nam dinh";
	    msv="b23dckh096";

	}
	sinhvien(string ma,string name,double diem,string adress){
	    ten=name;
	    msv=ma;
	    diachi=adress;
	    gpa=diem;
	}
	void in(){
	    cout<<ten<<" "<<gpa<<" "<<diachi<<" "<<msv;
	}

};
int main(){
	sinhvien x;
	x.in();
	sinhvien y("b19dckh095","vu van quyen",3.5,"nam dinh");
	y.in();

}

