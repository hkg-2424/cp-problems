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
   ll n,x,m;
   cin>>n>>x>>m;
   vector<pair<int,int>>vp;
   for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    vp.push_back(make_pair(a,b));
   }
   int ans=0;
    for(int i=m-1;i>=0;i--){
        int idx=i;
        while(idx>=0){
            if(x>=vp[idx].first && x<=vp[idx].second){
                ans+=(vp[i].second-vp[i].first +1);
                break;
            }else{
                idx--;
            }
        }
    }
    cout<<min(ans,(int)n)<<endl;
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