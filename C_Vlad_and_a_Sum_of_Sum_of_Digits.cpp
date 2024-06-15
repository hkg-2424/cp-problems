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

// ll res[20007];

// void solve(){
//     int x;
//     cin>>x;
//     cout<<x<<endl;
//     // cout<<res[x]<<endl;;
   
//    return;
// }
// ll s(ll x){
//     ll ans=0;
//     while(x){
//         ans+=x%10;
//         x/=10;
//     }
//     return ans;
// }

int arr[200001];
int sumofdigits(int n){
    int ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
    arr[0]=0;
    for(int i=1;i<=200000;i++){
        arr[i]=arr[i-1]+sumofdigits(i);
    }


   while(testcase--){
       int x;
       cin>>x;
       cout<<arr[x]<<endl;
   }
   return 0;
}