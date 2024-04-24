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
   char c;
   cin>>n>>c;
   string s;
   cin>>s;
   if(c=='g'){
    cout<<0<<endl;
    return;
   }
   vector<int>idxofg;
   for(int i=0;i<n;){
    if(s[i]==c){
        int idx=i+1;
        int idxans=-1;
        while(idx<n){
            if(s[idx]=='g'){
                idxans=idx;
                break;
            }
            idx++;
        }
        if(idxans==-1){
            idx=0;
            while(idx<n){
                if(s[idx]=='g'){
                    idxans=idx;
                    break;
                }
                idx++;
            }
            idxofg.pb(n-i+idx);
            break;
        }else{
            idxofg.push_back(idxans-i);
            i=idxans+1;
        }

    }else{
        i++;
    }

    
   }
   sort(all(idxofg));
   cout<<idxofg.back()<<endl;
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