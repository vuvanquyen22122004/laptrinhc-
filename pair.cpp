#include<bits/stdc++.h>
#include <utility>
using namespace std;
int main(){
   pair<int,int> vl1 (100,20);
   pair<int,int> vl2 (300,400);
   vl1.swap(vl2);
   cout<<vl1.first<<" "<<vl2.second<<endl;
   cout<<vl2.first<<" "<<vl2.second<<endl;
}
