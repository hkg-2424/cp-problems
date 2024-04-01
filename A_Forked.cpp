#include<bits/stdc++.h>
using namespace std;
 
#define  pb(x)       push_back(x)
#define  f           first
#define  s           second
#define  pi          acos(-1.0)
#define  LCM(a,b)    a*b/__gcd(a,b)
#define  GCD(a,b)    __gcd(a,b)
#define  sof         sizeof
#define  endl        '\n'  
#define  eps         1e-6
typedef long long ll;
 
const int mod = 1e9+7;
 
void solve(){
    ll a,b,kx,ky,qx,qy;
    cin>>a>>b>>kx>>ky>>qx>>qy;
    set<pair<ll,ll>> king ,queen;
    king.insert({kx-a,ky+b});
    king.insert({kx-a,ky-b});
    king.insert({kx+a,ky+b});
    king.insert({kx+a,ky-b});
    king.insert({kx-b,ky+a});
    king.insert({kx-b,ky-a});
    king.insert({kx+b,ky+a});
    king.insert({kx+b,ky-a});

    queen.insert(make_pair(qx-a,qy+b));
    queen.insert(make_pair(qx-a,qy-b));
    queen.insert(make_pair(qx+a,qy+b));
    queen.insert(make_pair(qx+a,qy-b));
    queen.insert(make_pair(qx-b,qy+a));
    queen.insert(make_pair(qx-b,qy-a));
    queen.insert(make_pair(qx+b,qy+a));
    queen.insert(make_pair(qx+b,qy-a));

    ll ans=0;
  for (pair<ll,ll> i : king) {
    if (queen.find(i) != queen.end()) {
      ans++;
    }
  }
  cout<<ans<<endl;

    
    return;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll testcase=1;
    cin>>testcase;
    while(testcase--){
         solve();
    }
    
    return 0;
}