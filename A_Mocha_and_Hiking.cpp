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
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   if(v.front()==1){
    cout<<n+1;
    for(int i=1;i<=n;i++)cout<<" "<<i;
    cout<<endl;
    return;
   }
   if(n==1){
    cout<<1<<" "<<2<<endl;
    return;
   }else{
    bool rastahe=false;
    int idx=-1;
    for(int i=0;i<n-1;i++){
        if(v[i]==0 && v[i+1]==1){
            rastahe=true;
            idx=i+1;
            break;
        }
    }
    if(rastahe==false && v.back()==1){
        idx=n;
        rastahe=true;
    }
    if(rastahe){
        for(int i=1;i<=idx;i++)cout<<i<<" ";
        cout<<n+1<<" ";
        for(int i=idx+1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
        return;
    }
   }
   
   cout<<-1<<endl;

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