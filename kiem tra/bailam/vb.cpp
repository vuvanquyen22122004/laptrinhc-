#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    fstream fs;
   fs.open("test1.txt");
   if(!fs.is_open()){
   return 1;
   }
fs<<"hello world";

}
