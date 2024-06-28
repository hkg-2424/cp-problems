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

pair<string,int> generatesolution(pair<int,int> arr[10],string orgnumber,int freq){
    int cost=0;
    if(arr[9].first>=freq){
        return make_pair(orgnumber,0);
    }

}
void solve(){
   int n,k;
   cin>>n>>k;
   string number;
   cin>>number;
   pair<int,int> arr[10];
   for(int i=0;i<number.size();i++){
    arr[number[i]-'0'].first++;
   }
   for(int i=0;i<10;i++){
    arr[i].second=i;
   }
   sort(arr,arr+10);
   pair<string,int>ans;
   ans=generatesolution(arr,number,k);
   cout<<ans.second<<endl<<ans.first<<endl;;


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