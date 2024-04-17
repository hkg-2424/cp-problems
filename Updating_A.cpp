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

int arr[(int)1e5+1];
void solve(){
   int n;
   cin>>n;
   ll sum=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
   }
   int i=0;
    vector<ll>negative;
   while(i<n){
    while(i<n && arr[i]>=0 )i++;
    ll neg=0;
    int istart=i;
    while(i<n && arr[i]<0){
        neg+=arr[i];
        i++;
    }
    if(i-istart>=2)negative.push_back(neg);

   }
   sort(negative.begin(),negative.end());
   for(int i=negative.size()-1;i>=0;i-=2){
    sum+=(-2*negative[i]);
   }
   cout<<abs(sum)<<endl;

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