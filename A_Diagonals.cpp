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
   int ans=0;
   if(k>0){
    ans++;
    k-=n;
   }
   for(int i=n-1;i>=1;i--){
    if(k>0){
        ans++;
        k-=i;
    }
    if(k>0){
        ans++;
        k-=i;
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