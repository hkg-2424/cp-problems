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
   int ans=0;
   bool istrue=false;
   string s;
   cin>>s;
   int high=s.size()-1;
   int low=0;
   while( low<s.size() && s[low]!='1' )low++;
   while(high>=0 && s[high]!='1')high--;
   for(int i=low;i<=high;i++)if(s[i]=='0')ans++;
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