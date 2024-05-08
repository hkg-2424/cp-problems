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
   vector<pair<int,vector<int>>>v;
   for(int i=0;i<n;i++){
    vector<int>dummy;
    int sizeofdummy;
    cin>>sizeofdummy;
    for(int j=0;j<sizeofdummy;j++){
        int temp;
        cin>>temp;
        dummy.push_back(temp);
    }
    sort(dummy.begin(),dummy.end());
    v.push_back({dummy[1]-dummy[0],dummy});
   }
    sort(all(v));
    for(int i=1;i<v.size();i++){
        v[0].second.push_back(v[i].second[0]);
        // v[i].second[0]=0;
    }
    sort(v[0].second.begin(),v[0].second.end());

    int idxofdiff=0;
    while(idxofdiff<n){
        if(v[idxofdiff].first!=v[0].first){
            break;
        }
        v[idxofdiff].F=v[idxofdiff].second[0];
        idxofdiff++;
    }
    sort(v.begin(),v.begin()+idxofdiff);
    // int idxofmin=-1;
    // int thatmin=v[0].second.back();
    // for(int i=1;i<v.size();i++){
    //     if(v[i].second[1]<v[0].second.back()){
    //         if(v[i].second[1]<thatmin){
    //             thatmin=v[i].second[1];
    //             idxofmin=i;
    //         }
    //     }
    // }
    // if(idxofmin>0){
    //     int temp=v[idxofmin].second[1];
    //     v[idxofmin].second[1]=v[0].second.back();
    //     v[0].second.back()=temp;
    // }
    int ans=0;
    // sort(v[0].second.begin(),v[0].second.end());
    ans+=v[0].second.front();
    for(int i=1;i<v.size();i++){
        ans+=v[i].second[1];
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