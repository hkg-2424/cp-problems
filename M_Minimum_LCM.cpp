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
bool primearray[100001]={false};
vector<int>primes;
void seive(){
    for(ll i=2;i<100001;i++){
        
        if(primearray[i]==false){
            primes.pb(i);
            for(ll j=i*i;j<100001;j+=i){
                primearray[j]=true;
            }
        }
    }
    return;
}

void solve(){
   int n;
   cin>>n;
//    cout<<"hello world"<<endl;
   if((n&1)==0){
    cout<<n/2<<" "<<n/2<<endl;
    return;
   }
   if(n<100001 && primearray[n]==false){
    cout<<n-1<<" "<<1<<endl;
    return;
   }
   int smallestprime=-1;
   for(auto &i:primes){
    if((n%i)==0){
        smallestprime=i;
        break;
    }
   }
   if(smallestprime==-1){
    cout<<n-1<<" "<<1<<endl;
    return;
   }
   int a=n/smallestprime;
   int b=n/smallestprime;
   a*=(smallestprime-1);
   cout<<a<<" "<<b<<endl;
   
   return;
}
int main(){
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   seive();
   ll testcase=1;
   cin>>testcase;
//    cout<<"hello"<<endl;
   while(testcase--){
       solve();
   }
   return 0;
}