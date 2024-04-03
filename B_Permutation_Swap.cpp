#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    
    vector<pair<int,int>>vpi;
  
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        
        vpi.push_back({temp,i});
        
    }
    sort(vpi.begin(),vpi.end());
    int agcd=0;
    for(int i=0;i<n;i++){
        agcd=__gcd(agcd,abs(vpi[i].second-i));
    }
    cout<<agcd<<endl;
 
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