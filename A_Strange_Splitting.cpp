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
   for(int i=0;i<n;i++)cin>>v[i];
   int idx=-1,a,b;
   for(int i=0;i<n-1;i++){
    if(v[i]<v[i+1]){
        idx=i;
        break;
    }
   }
   if(idx==-1){
    cout<<"NO"<<endl;
    return;
   }
   cout<<"YES"<<endl;
   for(int i=1;i<2;i++){
    cout<<'R';
   }
   cout<<"B";
   for(int i=3;i<=n;i++)cout<<"R";
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