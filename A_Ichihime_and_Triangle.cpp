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

void solve(){
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   ll x,y,z;
   if(a==b)x=a;
   else x=b-1;

   if(b==c)y=b;
   else y=c-1;

   if(c==d){
    z=c;
    y=c;
   }
   else z=d-1;
   cout<<x<<" "<<y<<" "<<z<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}