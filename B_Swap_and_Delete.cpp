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
   int one=0,zero=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='0')zero++;
    else one++;
   }
   int idx=0;
   while(idx<s.size()){
    if(s[idx]=='0'){
        if(one==0)break;
        one--;
    }
    else {
        if(zero==0)break;
        zero--;
    }
    idx++;
   }

    cout<<s.size()-idx<<endl;
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