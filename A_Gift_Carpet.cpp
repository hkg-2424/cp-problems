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
   int n,m;
   cin>>n>>m;
   char carpet[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>carpet[i][j];
    }
   }
   string s="vika";
   int idx=0;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(idx==4)break;
        if(carpet[j][i]==s[idx]){
            idx++;
            break;
        }
    }
    if(idx==4)break;
   }
   if(idx==4)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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