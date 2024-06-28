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
   ll n,a,b;
   cin>>n>>a>>b;
   if(a>=b){
    cout<<n*a<<endl;
   }else{
    ll kcost=b+1-a;
    ll kquestion=min(n,b);
    ll k=min(kcost,kquestion);
    ll profit=(b+1)*k-k*(k+1)/2;
   
    profit+=(a*(n-k));
    cout<<profit<<endl;
   }
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