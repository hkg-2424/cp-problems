#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define all(a) a.begin(),a.end()
#define pll pair <ll,ll>
#define F first
#define S second 
#define ld long double
#define sz(v) (int)v.size()
#define endl "\n"
// hii my name is hkg
int xorarray[int(3e5+1)]={0};

void solve(){
   int a,b;
   cin>>a>>b;
   int xr=xorarray[a-1];
   int ans=a;
   if(xr==b){}
   else if((xr^b)==a)ans+=2;
   else ans++;

   cout<<ans<<endl;

   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   for(int i=1;i<3e5+1;i++){
    xorarray[i]=i^xorarray[i-1];
   }
   while(testcase--){
       solve();
   }
   return 0;
}