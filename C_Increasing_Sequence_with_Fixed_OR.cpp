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
   ll n;
   cin>>n;
   vector<int>setbits;
   for(int i=0;i<60;i++){
    if(n&(1LL<<i))setbits.pb(i);
   }
   vector<ll>ans;
   ans.pb(n);
   for(int i=0;i<setbits.size();i++){
    if(n-(1LL<<setbits[i]))
    ans.push_back(n-(1LL<<setbits[i]));
   }
   reverse(all(ans));
   cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
   cout<<endl;
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