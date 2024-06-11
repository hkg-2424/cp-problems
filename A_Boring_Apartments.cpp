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
   int x;
   cin>>x;
   int numberofdigits=(10)*((x%10)-1);
   int numberofdiginx=0;
   while(x){
    x/=10;
    numberofdiginx++;
   }
   numberofdigits+=((numberofdiginx+1)*numberofdiginx)/2;
   cout<<numberofdigits<<endl;
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