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
bool solution(string &s,string &t,int idxs,int idxt,int left){
    // debug(idxs);
    // debug(idxt);
    // debug(left);
    if(idxt==t.size())return true;
    bool leftcheck=false;
    bool rightcheck=false;
    if((idxs > 0) && (s[idxs-1]==t[idxt]) ){
        leftcheck=solution(s,t,idxs-1,idxt+1,1);
    }
    if((left==0)&&(idxs+1 <s.size()) &&(s[idxs+1]==t[idxt]) ){
        rightcheck=solution(s,t,idxs+1,idxt+1,0);
    }
    return leftcheck||rightcheck;
}
void solve(){
   string s,t;
   cin>>s>>t;
   for(int i=0;i<s.size();i++){
    if(s[i]==t.front()){
        if(solution(s,t,i,1,0)){
            cout<<"YES"<<endl;
            return;
        }
    }
   }
   cout<<"NO"<<endl;
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