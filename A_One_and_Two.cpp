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
    int 
    arr[n+1]{0};
    
    for(int i=1;i<=n;i++){
        ll temp;
        cin>>temp;

        arr[i]=arr[i-1];
        if(temp==2)arr[i]++;
        // cout<<i<<" "<<arr[i]<<endl;
    }
    if(arr[n]&1){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(arr[n]==(2*arr[i])){
            cout<<i<<endl;
            return;
        }
    }
    
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