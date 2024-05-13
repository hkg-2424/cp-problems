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
   int n,k,q;
   cin>>n>>k>>q;
   vector<ll>a(k+1,0),b(k+1,0);
   for(int i=1;i<=k;i++){
    cin>>a[i];
   }
   for(int i=1;i<=k;i++){
    cin>>b[i];
   }
   for(int _=0;_<q;_++){
    ll d;
    cin>>d;
    auto it=(lower_bound(a.begin(),a.end(),d)-a.begin());
    if(a[it]==d)cout<<b[it]<<" ";
    else{
        while(a[it]>d)it--;
        ll ans=b[it];
        double addition_distance=(d-a[it]*(1.0));
        double speed=((a[it+1]-a[it])*1.0)/(b[it+1]-b[it]);
        ll time=floor(addition_distance/speed);
        // if((addition_distance/speed)-floor((addition_distance/speed))>0.5)time++;
      
        cout<<ans+time<<" ";
    }
   }
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