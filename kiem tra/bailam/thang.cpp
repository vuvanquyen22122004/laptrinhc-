
#include <bits/stdc++.h>
using namespace std;
int f[1000001];
void sang(){
	for( int i =0; i < 1000001; i ++)
		f[i]=1;
	f[0] =0; f[1] =0;
	for(int i = 2; i <= sqrt(1000001); i ++){
		if(f[i] == 1)
			for(int j= i*i ; j <= 1000001; j+=i)
					f[j]= 0;
	}
}
int main(){
	sang();
	int a, b;
	cin >> a >> b;
	int ok=1;
	for( int i=a; i <= b; i++){
		int j = i;
		while (f[j] == 1){
				j/=10;
		}
		if( j == 0 && i != 0 )
			cout << i << " ";
			ok=0;
	}
	if(ok) cout<<"28tech";
	return 0;
}
