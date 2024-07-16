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
   int n,k;
   cin>>n>>k;
   if(n==1){
    cout<<0<<endl;
    return;
   }
   if(k==2){
    cout<<(n-1)<<endl;
    return;
   }
   int ans=(n/(k-1))+(n%(k-1)?1:0);
   if(n%(k-1)==1)ans--;
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