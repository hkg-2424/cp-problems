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
   bool kuchkarnahe=true;
   for(int i=1;i<s.size();i++){
    if(s[i]>='a')kuchkarnahe=false;
   }
   if(kuchkarnahe){
    for(int i=1;i<s.size();i++){
        s[i]+='a'-'A';
    }
     if(!islower(s[0]))s[0]+='a'-'A';
   cout<<s<<endl;
   }else{
    cout<<s<<endl;
   }
  
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