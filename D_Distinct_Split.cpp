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
   string s;
   cin>>s;
   vector<int>a(26,0),b(26,0);
   for(int i=0;i<n;i++){
    b[s[i]-'a']++;
   }
   int i=0;// yaha tak part a ke andar rest in b;
   int ans=0;
   int fa=0;
   int fb=0;
   for(int i=0;i<26;i++)if(b[i])fb++;
   for(int i=0;i<n-1;i++){
    a[s[i]-'a']++;
    if(a[s[i]-'a']==1)fa++;
    b[s[i]-'a']--;
    if(b[s[i]-'a']<=0)fb--;
    ans=max(ans,fa+fb);
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