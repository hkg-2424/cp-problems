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
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   
   int ans=0;
   
   int end=0;
   for(int i=0;i<k;i++){
    if(s[i]=='B'){
        ans++;
    }
   }
   end=k;
   int tempans=ans;
   while(end<n){
        if(s[end]=='B')tempans++;
        if(s[end-k]=='B')tempans--;
        ans=max(ans,tempans);
        end++;
   }
   cout<<(ans>=k?0:k-ans)<<endl;
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