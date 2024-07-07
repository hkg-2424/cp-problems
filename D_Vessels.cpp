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
set<int>st;

void add(int addition,int vessel){
    if(vessel==N)return;
    if(vp[vessel].first==vp[vessel].second){
        st.erase(vessel);
        auto it=(st.lower_bound(vessel));
        if(it!=st.end())add(addition,*it);
        
        return;
    }
    vp[vessel].first+=addition;
    if(vp[vessel].first<=vp[vessel].second)return;
    else{
        int excess=vp[vessel].first-vp[vessel].second;
        vp[vessel].first=vp[vessel].second;
        st.erase(vessel);
        auto it=(st.lower_bound(vessel));
        if(it!=st.end()){
            add(excess,*it);
        }
        
        return;
    }
}
void solve(){
   int n;
   cin>>n;
   st.clear();
//    cout<<n<<endl;
//    vector<pair<int,int>>vp(n);
   for(int i=0;i<n;i++){
    vp[i].first=0;
    cin>>vp[i].second;
    st.insert(i);
   }
   int m;
   cin>>m;
   for(int q=0;q<m;q++){
    int query;
    cin>>query;
    if(query==1){
        int addition,vessel;
        cin>>vessel>>addition;
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