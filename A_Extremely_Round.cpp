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
    int n;
    cin>>n;
    int ctr=1;
    int p10=1;
    int ans=0;
    while(ctr<=n){
        int logten=log10(ctr);
        while((logten==((int)log10(ctr))) && (ctr<=n)){
            ans++;
            ctr+=p10;
        }
        p10*=10;
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