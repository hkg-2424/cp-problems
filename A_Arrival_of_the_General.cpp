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
   vector<int>v;
   int maxi=0;
   int maxidx=-1;
   int mini=INT_MAX;
   int minidx=n;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
    if(temp>maxi){
        maxi=temp;
        maxidx=i;
    }
    if(temp<=mini){
        mini=temp;
        minidx=i;
    }
   }
   int formax=maxidx;
   int formin=n-1-minidx;
   if(minidx<maxidx)formin--;
   cout<<formax+formin<<endl;
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