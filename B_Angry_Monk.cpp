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
   ll n,k;
   cin>>n>>k;
   ll sum=0;
   ll maxnum=1;
   for(int i=0;i<k;i++){
    ll temp;
    cin>>temp;
    sum+=temp;
    maxnum=max(temp,maxnum);
   }
   ll ans=sum-maxnum-(k-1);
   ans+=(sum-maxnum);
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