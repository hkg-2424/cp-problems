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
   string s,character;
   cin>>s>>character;
   int k;
   cin>>k;
   unordered_set<string> mp;
   for(int i=0;i<s.size();i++){
    int j;
   int noOfBadCharacters=0;  
    for( j=i;j<s.size();j++){
        if(character[s[j]-'a']=='0')noOfBadCharacters++;
        if(noOfBadCharacters>k)break;
        mp.insert(s.substr(i,j-i+1));
        
    }

    
   }
   cout<<mp.size()<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
      string s,character;
   cin>>s>>character;
   int k;
   cin>>k;
   unordered_set<string> mp;
   for(int i=0;i<s.size();i++){
    int j;
   int noOfBadCharacters=0;  
    for( j=i;j<s.size();j++){
        if(character[s[j]-'a']=='0')noOfBadCharacters++;
        if(noOfBadCharacters>k)break;
        mp.insert(s.substr(i,j-i+1));
        
    }

    
   }
   cout<<mp.size()<<endl;
   return 0;
}