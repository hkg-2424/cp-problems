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
   ll a,b;
   cin>>a>>b;
   if(a==b){
    cout<<0<<endl;
    return;
   }
   int factora=0,factorb=0;
   while(a%2==0){
    factora++;
    a/=2;
   }
   while(b%2==0){
    factorb++;
    b/=2;
   }
   if(a!=b){
    cout<<-1<<endl;
    return;
   }
   int diff=abs(factora-factorb);
   cout<<diff/3+ (diff%3?1:0)<<endl;
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