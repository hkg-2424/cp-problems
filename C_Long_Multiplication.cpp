#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
   string num1,num2;
   cin>>num1>>num2;
   int big=0;
   int idx;
   for(int i=0;i<num1.size();i++){
    if(num1[i]>num2[i]){
        big=1;
        idx=i;
        break;
    }else if(num1[i]<num2[i]){
        big=2;
        
        idx=i;
        break;
        }


   }
   if(big==0)cout<<num1<<endl<<num2<<endl;
//    debug(big);
   for(int i=idx+1;i<num1.size();i++){
    if((big==1) && (num1[i]>num2[i]))swap(num1[i],num2[i]);
    else if((big==2) && (num2[i]>num1[i]))swap(num2[i],num1[i]);
   }
   cout<<num1<<endl<<num2<<endl;

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