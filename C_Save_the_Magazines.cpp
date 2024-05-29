#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define all(a) a.begin(),a.end()
#define pll pair <ll,ll>
#define F first
#define S second 
#define ld long double
#define sz(v) (int)v.size()
#define endl "\n"
// hii my name is hkg

void solve(){
   int n;
   cin>>n;
   vector<bool>covered(n+1,false);
   vector<int>QuantityOfMagazine(n+1);
   for(int i=1;i<=n;i++){
    char temp;
    cin>>temp;
    if(temp=='0')covered[i]=false;
    else covered[i]=true;
   }
   ll quantityhash[n+1]={0};
   for(int i=1;i<=n;i++){
    cin>>QuantityOfMagazine[i];
    quantityhash[i]=QuantityOfMagazine[i]+quantityhash[i-1];
   }
   int lastuncovered=covered[1]?2:1;
   for(int i=2;i<=n;i++){
    if(covered[i]){
        if((quantityhash[i-1]-quantityhash[lastuncovered-1])>(quantityhash[i]-quantityhash[lastuncovered])){
            covered[lastuncovered]=true;
            covered[i]=false;
            lastuncovered=i;
        }
        

        }
    else{
        lastuncovered=i;
    }
   }
   ll sum=0;
   for(int i=1;i<=n;i++){
    if(covered[i])sum+=QuantityOfMagazine[i];
   }
    cout<<sum<<endl;
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}