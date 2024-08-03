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
ll maxdiff(vector<ll>&sum,int k){
   ll mini=INT64_MAX;
   ll maxi=INT64_MIN;
   for(int i=1;i<=(sum.size()-1)/k;i++){
      ll expr=sum[(i)*k]-sum[(i-1)*k];
      if(expr>maxi)maxi=expr;
      if(expr<mini)mini=expr;
      // cout<<expr<<endl;
   }
   
   return maxi-mini;
}
void solve(){
   int n;
   cin>>n;
   vector<ll>v(n);
   vector<ll>sum(n+1,0);
   for(int i=0;i<n;i++){
      ll temp;
      cin>>temp;
      v[i]=temp;
      sum[i+1]=sum[i]+temp;
   }
   ll ans=0;
   for(int i=1;i<=n/2;i++ ){
      if(n%i == 0){
         ans=max(maxdiff(sum,i),ans);
      }
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