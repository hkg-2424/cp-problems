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
int noofoperations(string &s,char c){
vector<int>spaces;
    int idx=0;
    while(idx<s.size()){
        if(s[idx]!=(c)){
            int ans=0;
            while(idx<s.size() && s[idx]!=(c)){
                ans++;
                idx++;
            }
            spaces.push_back(ans);
        }else idx++;
    }
   
    int operations=0;
    while(true){
        int all_zero=true;
        for(int i=0;i<spaces.size();i++){
            if(spaces[i]>0){
                all_zero=false;
                spaces[i]=(spaces[i]-spaces[i]/2-spaces[i]%2);
            }
        }
        if(all_zero)break;
        operations++;
    }
    return operations;
}
void solve(){
   string s;
   cin>>s;
//    int arr[26]={0};
//    for(int i=0;i<s.size();i++)arr[s[i]-'a']++;
//     int maxi=-1;
//     vector<int>idxes;
//     for(int i=0;i<26;i++){
//         if(arr[i]>maxi){
//            idxes.clear();
//            idxes.push_back(i);
//            maxi=arr[i];
//         }else if(maxi==arr[i]){
//             idxes.push_back(i);
//         }
//     }
set<char>se;
for(int i=0;i<s.size();i++){
    se.insert(s[i]);
}
    // cout<<maxidx<<endl;
    int operations=INT_MAX;
    for(auto &i:se){
        operations=min(operations,noofoperations(s,i));
    }
    cout<<operations<<endl;
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