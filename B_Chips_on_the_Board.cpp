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
   ll n;
   cin>>n;
   
   ll suma=0,sumb=0;
   ll mina=INT_MAX;
   ll minb=INT_MAX;
   for(int i=0;i<n;i++){
    ll temp;
    cin>>temp;
    suma+=temp;
    mina=min(mina,temp);
   }
    for(int i=0;i<n;i++){
    ll temp;
    cin>>temp;
    sumb+=temp;
    minb=min(minb,temp);
   }
   cout<<min(sumb+mina*n,suma+minb*n)<<endl;
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