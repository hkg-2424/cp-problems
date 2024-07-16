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
   vector<pair<ll,ll>>vp(n);
   vector<ll>timesvisit(n);

   for(int i=0;i<n;i++){
    cin>>vp[i].first;
    timesvisit[i]=vp[i].first;
    vp[i].second=i+1;
   }
   sort(all(vp));
   vector<ll>pos(n+1);
   pos[0]=0;
   int distance=1;
   for(int i=n-1;i>=0;i-=2){
    pos[vp[i].second]=distance;
    if(i==0)break;
    pos[vp[i-1].second]=-distance;
    distance++;
   }
   
    ll time=0;
    for(int i=0;i<n;i++){
        time+=(2*abs(pos[i+1]-pos[0])*timesvisit[i]);
    }
    cout<<time<<endl;
    for(auto &i:pos)cout<<i<<" ";
    cout<<endl;

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