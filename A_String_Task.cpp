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
   transform(s.begin(), s.end(), s.begin(), ::tolower);
   for(int i=0;i<s.size();i++){
    
    if((s[i]=='a') ||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){

    }else{
        cout<<"."<<s[i];
    }
   }

   return;
}
int main(){
  

       solve();
   return 0;
}