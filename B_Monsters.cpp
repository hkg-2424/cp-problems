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
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.F<b.F)return true;
    else if(a.F>b.F)return false;
    else{
        if(a.S>b.S)return true;
        else return false;
    }
}

void solve(){
   int n,k;
   cin>>n>>k;
   vector<pair<int,int>> v(n);
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v[i].F=temp%k;
    if(v[i].F==0)v[i].F=k;
    v[i].S=i;
   }
   sort(all(v),comp);
   for(int i=n-1;i>=0;i--){
    cout<<v[i].S+1<<" ";
   }
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