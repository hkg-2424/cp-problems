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
   int n,f,k;
   cin>>n>>f>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int valueatf=v[f-1];
   if(k==n){
      cout<<"YES"<<endl;
      return;
   }
   sort(v.begin(),v.end(),greater<int>());
   if(v[k]==valueatf && v[k-1]==valueatf)cout<<"MAYBE"<<endl;
   else if(valueatf<=v[k])cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
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