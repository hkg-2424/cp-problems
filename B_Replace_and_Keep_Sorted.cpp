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

void solve2(){
    int n,q,k;
   cin>>n>>q>>k;
   vector<int>v(n+1,0);
   for(int i=0;i<n;i++)cin>>v[i+1];
   vector<ll>Ansarray(n+1,0);
   for(int i=1;i<n;i++){
    Ansarray[i]=v[i+1]-v[i-1]-2+Ansarray[i-1];
   }
   Ansarray[n]=Ansarray[n-1]+k-v[n-1]-1;


//    for(int i=0;i<n+1;i++)cout<<v[i]<<" "<<Ansarray[i]<<endl;
   while(q--){
    int l,r;
    cin>>l>>r;
    if(l==r){
        cout<<k-1<<endl;
        continue;
    }
    ll ans=0;
    ans+=v[l+1]-2;
    ans+=Ansarray[r-1]-Ansarray[l];
    ans+=k-v[r-1]-1;
    cout<<ans<<endl;
   }

}

void solve(){
   int n,q,k;
   cin>>n>>q>>k;
   vector<int>v(n+1,0);
   for(int i=0;i<n;i++)cin>>v[i+1];
   while(q--){
    int l,r;
    cin>>l>>r;
    ll ans=0;
    ans+=(v[l+1]-2);
    ans+=(k-v[r-1]-1);
    for(int i=l+1;i<r;i++){
        ans+=(v[i+1]-v[i-1]-2);
    }
    cout<<ans<<endl;

   }
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve2();
   }
   return 0;
}