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
   string recipe;
   cin>>recipe;
   ll nb,ns,nc,pb,ps,pc,rubles;
   cin>>nb>>ns>>nc>>pb>>ps>>pc>>rubles;
   ll ans=0;
   ll start=0;
   ll end=rubles+nb+nc+ns+recipe.size();
   ll b=0,s=0,c=0;
   for(int i=0;i<recipe.size();i++){
    if(recipe[i]=='B')b++;
    else if(recipe[i]=='S')s++;
    else c++;
   }

   while(start<=end){
    ll mid=start+((end-start)>>1);
    // ll moneyrequired=(mid*b-nb)*pb+(mid*s-ns)*ps+(mid*c-nc)*pc;
    ll moneyrequired=0;
    if(s!=0 && (mid*s-ns)*ps>0){
        moneyrequired+=((mid*s-ns)*ps);
    }
    if(b!=0 && (mid*b-nb)*pb>0){
        moneyrequired+=((mid*b-nb)*pb);
    }
    if(c!=0 && (mid*c-nc)*pc>0){
        moneyrequired+=((mid*c-nc)*pc);
    }
    if(moneyrequired<=rubles){
        ans=mid;
        start=mid+1;
    }else{
        end=mid-1;
    }
   }

   cout<<ans<<endl;
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