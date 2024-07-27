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

vector<int> factors(int n){
    vector<int>ans;
    int i;
    for( i=1;i*i<n;i++){
        if((n%i)==0){
            ans.push_back(i);
            ans.push_back(n/i);
        }
    }
    if(i*i==n)ans.push_back(i);
    return ans;
}
void solve(){
   map<int,int>mp;
   int n;
   cin>>n;
   vector<int>v(n);
//    vector<int>ans(2e5+1,0);
   for(int i=0;i<n;i++){
    int m;
    cin>>m;
    mp[m]++;
    v[i]=m;
   }
   sort(all(v));
   vector<int>ans(v.back()+1,0);
   
   for(int i=1;i<=v.back();i++){
    vector<int>fac=factors(i);
    int maxi=0;
    // cout<<maxi<<endl;
    for(int j=0;j<fac.size();j++){
        // cout<<fac[j]<<endl;
        maxi=max(ans[fac[j]],maxi);
    }
    ans[i]=maxi+mp[i];
   }
   int answer=n;
   for(int i=0;i<n;i++){
    answer=min(answer,n-ans[v[i]]);
   }
   cout<<answer<<endl;

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