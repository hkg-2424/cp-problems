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
   ll n,k;
   cin>>n>>k;
   if(k&1){
    cout<<"No"<<endl;
    return;
   }
   vector<int>v(n+1);
   for(int i=0;i<n+1;i++)v[i]=i;
    k/=2;
    int x=n-1;
    for(int i=1;i<n+1;i++){
        if(k<=x){
            swap(v[i],v[i+k]);
            k=0;
            break;

        }
        swap(v[i],v[i+x]);
        k-=x;
        x-=2;
    }
    if(k>0){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    for(int i=1;i<=n;i++)cout<<v[i]<<" ";
    cout<<endl;


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