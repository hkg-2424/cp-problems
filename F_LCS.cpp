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
string s,t;
string dp[3000][3000];
string answer(int i,int j){
    if(i<0 || j<0)return "";
    // first string ka last character delete kia
    if(!dp[i][j].empty())return dp[i][j];
    string ans=answer(i-1,j);

    string ans2=answer(i,j-1);
    if(ans2.size()>ans.size())ans=ans2;

    ans2=answer(i-1,j-1);
    if(s[i]==t[j])ans2.push_back(s[i]);
    if(ans2.size()>ans.size())ans=ans2;
    return dp[i][j]=ans;
}

void solve(){
   cin>>s>>t;
   cout<<answer(s.size()-1,t.size()-1);
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