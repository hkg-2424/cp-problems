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
   string s,r;
   cin>>s;
   set<char>letters;
   r.clear();
   for(int i=0;i<n;i++){
    letters.insert(s[i]);
   }

   for(auto &i:letters){
    r.pb(i);
   }
   string ans;
   ans.clear();
   for(int i=0;i<n;i++){
    ans.pb(r[r.size()-1-r.find(s[i])]);
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