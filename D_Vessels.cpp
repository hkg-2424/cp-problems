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
const int N=2*(1e5)+1;

vector<pair<int,int>>vp(N);

void add(int addition,int vessel){
    if(vessel==N)return;
    if(vp[vessel].first==vp[vessel].second){
        add(addition,vessel+1);
        return;
    }
    vp[vessel].first+=addition;
    if(vp[vessel].first<=vp[vessel].second)return;
    else{
        int excess=vp[vessel].first-vp[vessel].second;
        vp[vessel].first=vp[vessel].second;
        if(excess>0)add(excess,vessel+1);
        return;
    }
}
void solve(){
   int n;
   cin>>n;
//    vector<pair<int,int>>vp(n);
   for(int i=0;i<n;i++){
    vp[i].first=0;
    cin>>vp[i].second;
   }
   int m;
   cin>>m;
   for(int q=0;q<m;q++){
    int query;
    cin>>query;
    if(query==1){
        int addition,vessel;
        cin>>addition>>vessel;
        add(addition,vessel-1);
    }else{
        int vessel;
        cin>>vessel;
        cout<<vp[vessel-1].first<<endl;
    }
   }
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