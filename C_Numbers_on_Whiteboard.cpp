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
   int arr[n+1];
   vector<pair<int,int>>vp;
   for(int i=1;i<=n;i++)arr[i]=i;
   for(int i=n-1;i>=1;i--){
    vp.push_back(make_pair(arr[i],arr[i+1]));
    arr[i]=ceil((arr[i]+arr[i+1])/2.0);
   }
   cout<<arr[1]<<endl;
   for(auto &i:vp){
    cout<<i.first<<" "<<i.second<<endl;
   }
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