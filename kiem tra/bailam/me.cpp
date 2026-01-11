#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    fstream fs;
     fs.open("quyenlinh.txt" ,ios::out|ios::app);
   if(!fs.is_open()){
    cout<<"khong mo duoc file";
   }
   fs<<"hello hi";

}
