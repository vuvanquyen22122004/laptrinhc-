
#include<bits/stdc++.h>
using namespace std;

bool check(){
	for(int i=1;i<=n;i++){
		if(a[i]==0) return false;
	return true;
	}
}
void sinhketiep(int n,int a[n]){
	for(int i=n;i>=1;i--){
		if(a[i]==1) a[i]==0;
		else {
			a[i]==1;
			break;
		}
	}


}
void generate(int n,int a[n]){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
	bool stop=true;
	while(stop){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		if(check()==false) sinhketiep();
		else stop=false;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];

	generate();
}
