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
   int n,f,k;
   cin>>n>>f>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int valueatf=v[f-1];
   int numberofvalues=0;
   for(auto &i:v)if(i==valueatf)numberofvalues++;
   sort(all(v),greater<int>());
//    for(auto &i:v)cout<<i<<" ";
//    cout<<endl;
if(k==n){
    cout<<"YES"<<endl;
    return;
}
   if((v[k]<valueatf))cout<<"YES"<<endl;
   else if( v[k]>valueatf)cout<<"NO"<<endl;
   else {
    if(numberofvalues==1)cout<<"NO"<<endl;
    else cout<<"MAYBE"<<endl;
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