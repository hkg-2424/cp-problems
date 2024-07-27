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
   long long n,m;
   cin>>n>>m;
   vector<int>v(n);
   for(auto &i:v)cin>>i;
   sort(v.begin(),v.end(),greater<int>());

   long long ans=0;
   int start=0;
   int end=0;
   long long currentcoins=0;
   while(end<n){
    currentcoins+=v[end];
    // debug(end);
    // debug(currentcoins);
    while(v[start]>v[end]+1){
        currentcoins-=v[start];
        start++;
    }
    if(currentcoins>m){
        currentcoins-=v[start];
        start++;
    }
    if(currentcoins<=m)ans=max(ans,currentcoins);
    end++;
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