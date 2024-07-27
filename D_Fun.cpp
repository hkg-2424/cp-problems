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
   int n,x;
   cin>>n>>x;
   ll ans=0;
   for(int a=1;a<n && a<x;a++){
    for(int b=1;a*b<n && a+b<x;b++){
        int c=min(max(0,x-a-b),max(0,(n-a*b)/(a+b)));
        ans+=c;
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