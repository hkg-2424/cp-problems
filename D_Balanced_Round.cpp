#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n,k;
    cin>>n>>k;
    
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int ans=1,tempans=1,curr=v[0];
    for(int i=1;i<n;i++){
        if(v[i]-curr>k){
            ans=max(ans,tempans);
            tempans=1;
            curr=v[i];
        }else{
            curr=v[i];
            tempans++;
        }
    }

    ans=max(ans,tempans);
    cout<<n-ans<<endl;
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