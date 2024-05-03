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
   int n,k;
   cin>>n>>k;
   vector<int>amount(n),height(n);
   for(auto &i:amount)cin>>i;
   for(auto &i:height)cin>>i;
   ll sum=0;
   int ans=0;
   for(int i=0;i<n;i++){
    int j=i+1;
    while(j<n && (height[j-1]%height[j]==0)){
        j++;
    }
    int r=i,l=i;
    sum=0;
    for(r=i;r<j;r++){
        sum+=amount[r];
        while(sum>k && l<=r){
            sum-=amount[l++];
        }
        ans=max(ans,r-l+1);

    }
    
    i=j-1;


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