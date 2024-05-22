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
   int x,y;
   cin>>x>>y;
   int ans=y/2;
   if(y&1)ans++;
   if(((y&1)==0 )&& (x-7*ans)>0){
    x=x-7*ans;
    ans+=x/15;
    if(x%15)ans++;
   }else if(((y&1)==1) && ((x-7*ans-4)>0)){
    x=x-7*ans-4;
    ans+=x/15;
    if(x%15)ans++;
   }
   cout<<ans<<endl;

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