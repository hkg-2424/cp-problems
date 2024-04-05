#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int ans=v.back()-v.front();
    for(int i=0;i<n-1;i++){
        ans=max(ans,v[i]-v[i+1]);
    }
    for(int i=0;i<n;i++)ans=max(ans,v[i]-v[0]);
    for(int i=0;i<n;i++)ans=max(ans,v.back()-v[i]);
    cout<<ans<<endl;
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