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

bool isperfectlongcat(ll x){
    x++;
    int ct=0;
    for(int i=0;i<63;i++){
        if(x&(1LL<<i))ct++;
    }
    return (ct==1);
}
vector<int>ans;
bool solution(ll x,int steps){
    if(steps>=40)return false;
    for(int i=0;i<=20;i++){
        ll temp=x;
        temp=temp^((1LL<<i)-1);
        ans.push_back(i);
        if(isperfectlongcat(temp))return true;
        ans.push_back(-1);
        temp++;
        if(isperfectlongcat(temp))return true;
        else if(solution(temp,steps+2))return true;
        ans.pop_back();
        ans.pop_back();

    }
    return false;
}
void solve(){
   ll x;
   cin>>x;
   if(isperfectlongcat(x)){
    cout<<0<<endl;
    return;
   }
   solution(x,0);
   cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i+=2){
    cout<<ans[i]<<" ";
   }
   cout<<endl;


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