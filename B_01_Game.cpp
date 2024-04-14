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

void solve(){
   string s;
   cin>>s;
   int one=0,zero=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='1')one++;
    else zero++;
   }
   int ans=min(one,zero);
   if(ans&1)cout<<"DA"<<endl;
   else cout<<"NET"<<endl;
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