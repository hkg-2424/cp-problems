
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n,x;
    cin>>x>>n;
    vector<ll>v(4,n/4);
    
    for(int i=0;i<=n%4;i++)v[i]++;
    ll series[4]{0};
    
    for(int i=0;i<4;i++){
        series[i]=(v[i]*(2*i+(v[i]-1)*4))/2;
    }
    // for(int i=0;i<4;i++)cout<<series[i]<<endl;
    if(x&1){
        cout<<x+series[1]+series[0]-series[2]-series[3]<<endl;

    }else{
        cout<<x+series[2]+series[3]-series[1]-series[0]<<endl;
    }
    return;
}
int main(void){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll testcase=1;
cin>>testcase;
while(testcase--){
   solve();
}

return 0;
}