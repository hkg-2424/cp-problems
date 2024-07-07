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
   unordered_map<int,int>mp;

   for(auto &i:v){
    cin>>i;
    mp[i]++;
   }
   for(auto &i:mp){
    if(i.second<2){
        cout<<-1<<endl;
        return;
    }
   }
   vector<int>ans(n);
   for(int i=0;i<n;i++){
    ans[i]=i+1;
   }
   int idx=0;
   for(int i=0;i<n-1;i++){
    if(v[i]==v[i+1]){
        swap(ans[i],ans[i+1]);
    }
   }
   for(auto &i:ans)cout<<i<<" ";
   cout<<endl;
   
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