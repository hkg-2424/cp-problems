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

bool isdistinct(int year){
    set<int>digits;
    while(year){

        if(digits.empty()==false && find(digits.begin(),digits.end(),year%10)!=digits.end())return false;
        digits.insert(year%10);
        year=year/10;
    }
    return true;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int year;
   cin>>year;
    for(int i=year+1;i<=9012;i++){
        if(isdistinct(i)){
            cout<<i<<endl;
            return 0;
        }
    }
   return 0;
}