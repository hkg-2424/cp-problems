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
bool areequal(vector<int>&a,vector<int>&b){
    for(int i=0;i<26;i++){
        // if(a[i]!=b[i])return false;
        if(a[i]!=b[i]){
            cout<<'a'+i<<endl;
            return false;
        }
    }
    cout<<"true gaya"<<endl;
    return true;
}

void solve(){
   string p,h;
   cin>>p>>h;
   if(p.size()>h.size()){
    cout<<"NO1"<<endl;
    return;
   }
   vector<int>phash(26,0),hhash(26,0);
   for(int i=0;i<p.size();i++){
    phash[p[i]-'a']++;
    hhash[h[i]-'a']++;
   }
   int idx=p.size();

    if(areequal(phash,hhash)==true){
        cout<<"YES"<<endl;
        return;
    }
    else{
        hhash[h[idx-p.size()]-'a']--;
        
        hhash[h[idx]-'a']++;
        idx++;
    }
while(idx<h.size()){
    if(areequal(phash,hhash)==true){
        cout<<"YES"<<endl;
        return;
    }
    else{
        hhash[h[idx-p.size()]-'a']--;
        
        hhash[h[idx]-'a']++;
        idx++;
    }
}
cout<<"NO2"<<endl;


   
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