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
   ll arr[n];
   for(auto &i:arr){
    cin>>i;
   }
   ll ans=0;
   for(ll i=0;i<n;i++){
    if(arr[i]==1){
        ans+=n;
    }else{
        ll idx=0;
        ll arri[32];

        arri[0]=1;
        while( idx<32 && (arri[idx]*arr[i]<int(1e10))){
            arri[idx+1]=arri[idx]*arr[i];
            idx++;
        }
        for(int j=1;j<=n;j++){
            if(j>=idx){
                break;
            }else{
                if(arri[j]<=arr[j-1]){
                    ans++;
                }
            }
        }
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