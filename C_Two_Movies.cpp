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
   int movie1=0,movie2=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a==1 && b==1){
            if(movie1<movie2)movie1++;
            else movie2++;
        }else if(a==-1 && b==-1){
            if(movie1<movie2)movie2--;
            else movie1--;
        }else if(a==-1){
            if(min(movie1-1,movie2)>=min(movie1,movie2+1))movie1--;
            else movie2++;
        }else{
            if(min(movie1+1,movie2)<=min(movie1,movie2-1))movie2--;
            else movie1++;
        }
    }
   cout<<min(movie1,movie2)<<endl;
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