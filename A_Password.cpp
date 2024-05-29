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
int fac[11];
void solve(){
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &i:v)cin>>i;
   cout<<6*fac[10-n]/(fac[2]*fac[8-n])<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   fac[0]=1;
   for(int i=1;i<=10;i++){
    fac[i]=i*fac[i-1];
   }
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}