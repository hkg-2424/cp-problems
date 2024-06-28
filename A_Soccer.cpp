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
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   int modx=x2-x1,mody=y2-y1;
   if(y2>x2 &&  y1<x1){
    cout<<"NO"<<endl;
    return;
   }else if(x2>y2 && x1<y1 ){
    cout<<"NO"<<endl;
    return;    
   }

   cout<<"YES"<<endl;
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