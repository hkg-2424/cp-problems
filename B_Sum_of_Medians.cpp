#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" is "<<x<<endl;
#define endl "\n"

void solve(){
   int n,k;
   cin>>n>>k;
   int arr[n*k+1];
   for(int i=1;i<=n*k;i++)cin>>arr[i];
   ll sum=0;
   int medianidx=(n/2+(n&1));
   for(int i=(medianidx-1)*k+1;i<=n*k*1ll;i+=(n-medianidx+1))sum+=arr[i];
   cout<<sum<<endl;

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