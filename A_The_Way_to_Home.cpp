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
   int n,d;
   cin>>n>>d;
   string s;
   cin>>s;
   int idx=0;
   int ans=0;
   while(idx<n-1){
      if(s[idx]=='1'){
         ans++;
         int jump=1;
         int idxof1=-1;
         while(idx+jump<n && jump<=d){
            if(s[idx+jump]=='1')idxof1=idx+jump;
            jump++;
         }
         if(idxof1==-1){
            cout<<-1<<endl;
            return;
         }
         idx=idxof1;
      }
   }
   cout<<ans<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   // cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}