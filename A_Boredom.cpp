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
vector<ll>ans(1e5+1,-1);
vector<ll>freq(1e5+1,0);

ll solution(ll num){
    if(num<=0)return 0;
    if(ans[num]!=-1)return ans[num];
    ans[num]=max(num*freq[num]+solution(num-2),solution(num-1));
    return ans[num];
}
void solve2(){
    ll n;
 
    cin>>n;
    
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        freq[temp]++;

    }

    cout<<solution(10000)<<endl;

}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve2();
   }
   return 0;
}