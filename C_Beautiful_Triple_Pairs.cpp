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
//    map<int,vector<int>>mp;
//    for(int i=0;i<n;i++){
//     int k;
//     cin>>k;
//     mp[k].push_back(i);
//    }
    vector<int>v(n,0);
    for(auto &i:v)cin>>i;
    int ans=0;
    for(int i=0;i<n-2;i++){
        int a1=v[i],a2=v[i+1],a3=v[i+2];
        for(int j=i+1;j<n-2;j++){
            int b1=v[j],b2=v[j+1],b3=v[j+2];
            if((a1!=b1)&&(a2==b2)&&(a3==b3)){
                ans++;
            }else if((a1==b1)&&(a2!=b2)&&(a3==b3))ans++;
            else if((a1==b1)&&(a2==b2)&&(a3!=b3))ans++;
        }
    }
    cout<<ans<<endl;
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