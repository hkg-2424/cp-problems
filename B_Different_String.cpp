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
   bool possible=false;
   int ans=0;
   for(int i=0;i<s.size()-1;i++){
    if(s[i]!=s[i+1]){
        possible=true;
        ans=i+1;
        break;
    }
   }
   if(!possible){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;

    char c=s[ans];
    s[ans]=s[0];
    s[0]=c;
    cout<<s<<endl;
    

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