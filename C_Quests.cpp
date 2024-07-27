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
   vector<int>a(n),b(n);
   for(auto &i:a)cin>>i;
   for(auto &i:b)cin>>i;
   int lengthtotraverse=min(n,k);
   ll ans=0;
   ll current=0;
   int maxb=0;
   for(int i=0;i<lengthtotraverse;i++){
    current+=a[i];
    maxb=max(maxb,b[i]);
    ans=max(ans,current+(k-i-1)*maxb);
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