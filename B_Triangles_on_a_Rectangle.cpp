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
   ll w,h;
   cin>>w>>h;
   vector<ll>v={h,h,w,w};
    for(int i=0;i<4;i++){
        int k;
        cin>>k;
        int max=INT_MIN;
        int min=INT_MAX;
        for(int j=0;j<k;j++){
            int temp;
            cin>>temp;
            if(temp>max)max=temp;
            if(temp<min)min=temp;
        }
        v[i]*=(max-min);
    }
    sort(all(v));
    cout<<v.back()<<endl;
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