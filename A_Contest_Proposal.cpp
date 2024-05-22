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
   int a[n];
   int b[n];
   for(auto &i:a)cin>>i;
   for(auto &i:b)cin>>i;
    int start=0;
    int end=n-1;
   for(int i=0;i<n;i++){
    if(a[start]>b[i]){
        end--;
        continue;
    }
    start++;
   }
   cout<<n-start<<endl;;
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