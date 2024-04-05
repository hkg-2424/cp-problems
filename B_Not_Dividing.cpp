#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
        if(i==1)i++;
    }
    for(int i=0;i<n-1;i++){
        if(v[i+1]%v[i])continue;
        else v[i+1]++;
    }
   
    
    for(auto &i:v)cout<<i<<" ";
    cout<<endl;
    
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