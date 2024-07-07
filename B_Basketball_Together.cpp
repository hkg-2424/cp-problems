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
   int n,d;
   cin>>n>>d;
   int ans=0;
   vector<int>v;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    if(temp>d){
        ans++;
    }else v.pb(temp);

   }
   sort(v.begin(),v.end());
   int end=v.size()-1;
   int teammehe=0;
   
   while(teammehe<end){
    int group=d/v[end];
    if(teammehe+group<end+1)ans++;
    else break;
    teammehe+=group;
    end--;
   }
   
   cout<<ans<<endl;
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