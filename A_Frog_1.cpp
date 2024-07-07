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
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &i:v)cin>>i;
   vector<ll>cost(n);
   cost[0]=0;
   cost[1]=abs(v[1]-v[0]);
   for(int i=2;i<n;i++){
    cost[i]=min(cost[i-1]+abs(v[i-1]-v[i]),cost[i-2]+abs(v[i-2]-v[i]));
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