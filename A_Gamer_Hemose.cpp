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
   int n,h;
   cin>>n>>h;
   vector<int>v(n);
   for(auto &i:v)cin>>i;
   sort(all(v));
   int low=1,high=h/v[n-2];
   if(h%v[n-2])high++;
   int mid;
   int ans=h;
   while(low<=high){
    // debug(mid);
    int mid=(low+high)/2;
    ll odd=(mid/2)*(1LL)+(mid&1);
    ll even=mid-odd;
    if(h>((odd*v[n-1])+(even*v[n-2]))){
        low=mid+1;
        
    }else{
        // cout<<"answer reached here";
        ans=mid;
        high=mid-1;
    }
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