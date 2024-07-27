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
   string s;
   cin>>s;
   int lowercase=0;
   int uppercase=0;
   for(int i=0;i<s.size();i++){
    if(s[i]>='a')lowercase++;
    else uppercase++;
   }
   if(uppercase>lowercase){
    transform(s.begin(),s.end(),s.begin(),::toupper);
   }else{
    transform(s.begin(),s.end(),s.begin(),::tolower);
   }
   cout<<s<<endl;
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