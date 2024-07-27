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
   int ans;
   int low=1;
   int high=1000000;
   while(low<=high){
    int mid=low+(high-low)/2;
    cout<<mid<<endl;
    cout<<flush;
    string c;
    cin>>c;
    if(c=="<"){
        high=mid-1;
    }else{
        ans=mid;
        low=mid+1;
    }
   }
   cout<<"! "<<ans<<endl;
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