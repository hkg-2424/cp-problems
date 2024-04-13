#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
   ll n;
   cin>>n;
   vector<int>v(n+1);
   int idxmax=0;
   ll max=0;
   for(int i=1;i<=n;i++){
    cin>>v[i];
    if(v[i]>=max){
        max=v[i],idxmax=i;
    }
   }
   v[0]=0;
   
   ll low;
   int id=1;
   while(id<=n && v[id]==v[idxmax])id++;
   low=id;
   ll high=low+1;
   ll lhigh=0;
   bool ans=false;
   while(high<=n && !ans){
        if(v[high]> v[low]){
            lhigh=high+1;
            while(lhigh<=n && v[high]<v[lhigh]){
                lhigh++;
            }
            if(lhigh>n){
                low=high;
                high++;
                continue;
            }else{
                ans=true;
                break;
            }
        }else{
            high++;
            continue;
        }
   }
   if(ans){
    cout<<"YES"<<endl;
    cout<<low<<" "<<high<<" "<<lhigh<<endl;

   }else cout<<"NO"<<endl;
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