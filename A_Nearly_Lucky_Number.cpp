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
   string s;
   cin>>s;
//    cout<<s<<endl;
int no_of_luckydigits=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'||s[i]=='7')no_of_luckydigits++;
    }
    if(!no_of_luckydigits){
        cout<<"NO"<<endl;
        return;
    }
    while(no_of_luckydigits){
        int mod=no_of_luckydigits%10;
        no_of_luckydigits/=10;
        if(mod!=4  && mod!=7){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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