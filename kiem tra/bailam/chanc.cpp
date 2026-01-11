#include <iostream> #include <algorithm> #include <cmath>
#include <map>
using namespace std;
 int main(){ int tc; cin>>tc;
 while(tc--){ int n,x; cin>>n>>x;
 int a[n+1];
 multimap <int,int> mp;
  for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++)
        mp.insert({abs(x-a[i]),a[i]});
   for(auto x:mp) cout<<x.second<<" "; cout<<endl;
    } }
