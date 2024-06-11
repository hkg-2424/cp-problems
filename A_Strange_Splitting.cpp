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
   vector<int>vsum(n+1,0);
 
   for(int i=0;i<n;i++){
    cin>>v[i];
    vsum[i+1]=vsum[i]+v[i];
   }
   bool allsame=true;
   for(int i=0;i<n-1;i++){
    if(v[i]!=v[i+1]){
        allsame=false;
        break;
    }
   }
   if(allsame){
    cout<<"NO"<<endl;
    return;
   }else{
    cout<<"YES"<<endl;
   }
   int idx=0;
  
   
   cout<<"R";
   for(int i=1;i<n;i++)cout<<"B";
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