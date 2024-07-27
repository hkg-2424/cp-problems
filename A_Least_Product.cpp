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
   vector<int>v(n);
   int numberofnegatives=0;
   bool zeroesthere=false;
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]<0)numberofnegatives++;
    else if(v[i]==0)zeroesthere=true;
   }
   if(zeroesthere){
    cout<<0<<endl;
    return;
   }
   if(numberofnegatives&1){
    cout<<0<<endl;
   }else{
    cout<<1<<endl;
    cout<<1<<" "<<0<<endl;
   }

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