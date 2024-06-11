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
   bool zeroagaya=false;
   int numberOfPositive=0,numberOfNegative=0;
   vector<ll>v;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    if(temp==0)zeroagaya=true;
    else {
        v.push_back(temp);
        if(temp>0)numberOfPositive++;
        else numberOfNegative++;
    }
   }

   if((numberOfNegative>2) ||(numberOfPositive>2)){
    cout<<"NO"<<endl;
    return;
   }
    if(zeroagaya)v.push_back(0);
    if(v.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    sort(all(v));
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++){
            for(int k=j+1;k<v.size();k++){
                if(!binary_search(all(v),v[i]+v[k]+v[j])){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return;
   
   
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