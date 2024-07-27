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
   int n,q;
   cin>>n>>q;
   string a,b;
   cin>>a>>b;

   vector<vector<int>>hasha(n+1,vector<int>(26,0));
   for(int i=1;i<=n;i++){

        for(int j=0;j<26;j++){
            hasha[i][j]=hasha[i-1][j];
            // hashb[i][j]=hashb[i-1][j];
        }
        hasha[i][a[i-1]-'a']++;
        hasha[i][b[i-1]-'a']--;
  
   }
   for(int i=0;i<q;i++){
    int l,r;
    cin>>l>>r;
    
    int ans=0;
    for(int j=0;j<26;j++){
        ans+=abs((hasha[r][j]-hasha[l-1][j]));
    }
    cout<<ans/2<<endl;
   }
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