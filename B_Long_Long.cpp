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
   int n;
   cin>>n;
   vector<int>v(n);
   long long sum=0;
   for(auto &i:v){
    cin>>i;
    sum+=abs(i);
   }
   int low=0,high=0,ans=0;
   while(high<n){
    if(v[high]<0){
        ans++;
        while(high<n && v[high]<=0)high++;
    }else high++;
   }
   cout<<sum<<" ";
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