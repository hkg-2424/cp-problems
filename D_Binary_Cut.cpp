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
bool sorting(vector<int>&a,vector<int>&b){
    bool fora=a.back()!=a.front();
    bool forb=b.back()!=b.front();
    if((fora)&&(forb)){
        
        return a.size()>b.size();

    }else if(fora){
        return true;
    }else return false;
    
}
void solve(){
   string s;
   cin>>s;
   vector<vector<int>>no_of_strings;
   int idx=0;
   while(idx<s.size()){
    vector<int>temp;
    while(idx<s.size()){
        if(s[idx]=='1')break;
        else temp.push_back(s[idx]-'0');
        idx++;
    }
    while(idx<s.size()){
        if(s[idx]=='0')break;
        else temp.push_back(s[idx]-'0');
        idx++;
    }
    no_of_strings.push_back(temp);
    temp.clear();
    sort(all(no_of_strings),sorting);
   }
   int ans=1;
   for(int i=1;i<no_of_strings.size();i++){
    if(no_of_strings[i].front()!=no_of_strings[i].back()){
        ans+=2;
    }else ans++;
   }
   cout<<ans<<endl;
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