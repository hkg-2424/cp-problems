#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    int ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        if(temp==i)ans++;
    }
    cout<< (ans>>1) +(ans&1) <<endl;
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