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
   vector<char>v;
   int ones=0,zeroes=0;
   for(int i=0;i<n;i++){
    char c;
    cin>>c;
    if(c=='1' || v.size()==0|| v.back()!=c)v.pb(c);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]=='1')ones++;
        else zeroes++;
    }
   if(ones>zeroes)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
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