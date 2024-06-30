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
   int k;
   cin>>n>>k;
   int array[n/k][k];
   for(int i=0;i<n;i++){
    cin>>array[i/k][i%k];
   }
   int ans=0;
   for(int i=0;i<k;i++){
    int one=0,two=0;
    for(int j=0;j<n/k;j++){
        if(array[j][i]==1)one++;
        else two++;
    }
    ans+=min(two,one);
   }
   cout<<ans<<endl;



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