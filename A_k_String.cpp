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
   int k;
   cin>>k;
   string s;
   cin>>s;
   vector<int>v(26,0);
   for(int i=0;i<s.size();i++){
    v[s[i]-'a']++;
   }
   for(int i=0;i<26;i++){
    if(v[i]%k){
        cout<<-1<<endl;
        return;
    }
    v[i]/=k;
   }
   string ans;
   while(ans.size()<s.size()){
    for(int i=0;i<26;i++){
        for(int j=0;j<v[i];j++){
            ans.push_back(i+'a');
        }
    }
   }
   cout<<ans<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}