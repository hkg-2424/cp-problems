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
   vector<int>v(n);
   for(int &i:v)cin>>i;
   vector<ll>cost(n);
   cost[0]=0;
   for(int i=1;i<n;i++){
    ll ans=INT64_MAX;
    int idx=i-1;
    while(idx>=0 && idx>=i-k){
        ans=min(ans,cost[idx]+abs(v[idx]-v[i]));
        idx--;
    }
    cost[i]=ans;
   }
   cout<<cost[n-1]<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}