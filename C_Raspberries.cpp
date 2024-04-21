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
   vector<int>v(k);
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v[temp%k]++;
   }
   if(v[0])cout<<0<<endl;
   else if(k==4 && v[2]>=2)cout<<0<<endl;
   else if(k==4 && v[1]>=1 && v[2]==1)cout<<1<<endl;
   else if(v[k-1])cout<<1<<endl;
   else if(k==4 && v[1]>=2)cout<<2<<endl;
   else{
    for(int i=k-1;i>=0;i--){
        if(v[i]){
            cout<<k-i<<endl;
            return;
        }
    }
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