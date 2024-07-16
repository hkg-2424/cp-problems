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
vector<ll>value(100),weights(100);
ll dp[100][100001];
ll solve2(int idx,int wt_left){
    if(wt_left==0)return 0;
    if(idx<0)return 0;
    if(dp[idx][wt_left]!=0)return dp[idx][wt_left];
    ll ans=0;
    ans=solve2(idx-1,wt_left);
    if(wt_left-weights[idx]>=0){
        ans=max(ans,solve2(idx-1,wt_left-weights[idx])+value[idx]);
    }
    return dp[idx][wt_left]=ans;
}

void solve(){
   int n,w;
   cin>>n>>w;
   
   for(int i=0;i<n;i++)cin>>weights[i]>>value[i];
    ll ans=solve2(n-1,w);
    cout<<ans<<endl;
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