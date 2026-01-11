#include<bits/stdc++.h>
using namespace std;
string x[4];
string ngay[]={"02","20","22"};
   string nam[]={"2000","2002","2020","2022","2200","2202","2220","2222"};
void trys(int i){
   
   
   if(i==1){
    for(int j=0;j<3;j++){
        x[i]=ngay[j];
        trys(i+1);
    }
   }
   else if(i==2){
    x[i]="02";
    trys(i+1);
   }
   else if(i==3){
    for(int l=0;l<8;l++){
        x[i]=nam[l];
        cout<<x[1]<<"/"<<x[2]<<"/"<<x[3]<<endl;
     

    }
   }
}
int main(){
    trys(1);


}