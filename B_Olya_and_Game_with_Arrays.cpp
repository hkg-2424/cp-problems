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
   ll sum=0;
   int mini=INT_MAX,mini2=INT_MAX;
   int idxofmini2=-1;
   vector<vector<int>>v;
   for(int i=0;i<n;i++){
    vector<int>dummy;
    int k;
    cin>>k;
    for(int j=0;j<k;j++){
        int temp;
        cin>>temp;
        dummy.pb(temp);
    }
    sort(all(dummy));
    sum+=dummy[1];
    if(mini>dummy[0]){
        
        mini=dummy[0];
    }
    if(mini2>dummy[1]){
        mini2=dummy[1];
        idxofmini2=i;
    }
    v.push_back(dummy);
   }
//    debug(mini)
//    debug(sum);
//    debug(idxofmini)
   cout<<sum-v[idxofmini2][1]+mini<<endl;
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