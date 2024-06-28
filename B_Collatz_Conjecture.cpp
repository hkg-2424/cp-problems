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
   ll x,y,k;
   cin>>x>>y>>k;
   if(y==2 && x!=2 ){
    cout<<1<<endl;
    return;
   }
   while(k>0){
    if(x%y==0){
        x++;
        k--;
    }
    if(k==0){
        while(x%y==0){
            x/=y;
        }
        break;
    }
    if((y-x%y)<=k){
        k-=(y-x%y);
        x+=(y-x%y);
        while((x%y)==0){
            x/=y;
        }

    }else{
        x+=k;
        k=0;
        break;
    }
   }
   cout<<x<<endl;
   return;
}


void solve1(){
       ll x,y,k;
   cin>>x>>y>>k;
   for(;k>0;){
    if(x==1 &&y==2)break;
    if(x%y==0){
        x++;
        k--;
        continue;
    }
    if(k>=(y-(x%y))){
        k-=(y-(x%y));
        x+=(y-(x%y));
        while(x%y==0)x/=y;
    }else{
        x+=k;
        k=0;
    }
   }
   cout<<x<<endl;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve1();
   }
   return 0;
}