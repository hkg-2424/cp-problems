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
   ll x,y,k;
   cin>>x>>y>>k;
   ll numberofsticks=1;
   ll numberofcoals=0;
    ll numberoftradestogetcoal=ceil(k*1.0*y/(x-1));
    numberofsticks+=(numberoftradestogetcoal*(x-1)-k*y);
    ll numberoftradestogetmoresticks=ceil((k-numberofsticks*1.0)/(x-1));
    cout<<k+numberoftradestogetcoal+numberoftradestogetmoresticks<<endl;


   
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