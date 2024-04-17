#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    ll n;;
    cin>>n;
    if(n<4 or n&1){
        cout<<-1<<endl;
        return;
    }
    ll min=n/6;
    if(n%6)min++;

    
    ll max=n/4;

    cout<<min<<" "<<max<<endl;

    return;
}
int main(void){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll testcase=1;
cin>>testcase;
// int x=1;
while(testcase--){
    // cout<<x<<endl;;
    // x++;
   solve();
}

return 0;
}