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
bool arr[1000001];
vector<int>primes;
void seive(){
    memset(arr,false,sizeof(arr));
    for(int i=2;i<=1000000;i++){
        if(arr[i]==false){
            primes.pb(i);
            for(int j=2*i;j<=1000000;j+=i)arr[j]=true;
        }
    }
    return;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   seive();
//    for(auto &i:primes)cout<<i<<endl;
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    ll ans=INT_MAX;
    for(int i=0;i<n;i++){
        ll operations=0;
        for(int j=0;j<m;j++){
            operations+=(*(lower_bound(all(primes),matrix[i][j]))-matrix[i][j]);
        }
        ans=min(ans,operations);
    }
    for(int i=0;i<m;i++){
        ll operations=0;
        for(int j=0;j<n;j++){
            operations+=(*(lower_bound(all(primes),matrix[j][i]))-matrix[j][i]);
        }
        ans=min(ans,operations);
    }
    cout<<ans<<endl;
   
   return 0;
}