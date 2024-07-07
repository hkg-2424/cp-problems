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
   vector<vector<int>>v(n,vector<int>(3,0));
   for(int i=0;i<n;i++){
    cin>>v[i][0]>>v[i][1]>>v[i][2];
   }
   vector<vector<ll>>cost(n,vector<ll>(3,-1));
   cost[0][0]=v[0][0];
   cost[0][1]=v[0][1];
   cost[0][2]=v[0][2];
   for(int i=1;i<n;i++){
    
    for(int j=0;j<3;j++){
        ll ans=0;
        for(int k=0;k<3;k++){
            if(k==j)continue;
            ans=max(cost[i-1][k]+v[i][j],ans);
        }
        cost[i][j]=ans;
    }
   }
   cout<<max(cost[n-1][0],max(cost[n-1][1],cost[n-1][2]))<<endl;
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