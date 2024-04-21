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
#define int long long int
// hii my name is hkg
bool custsort(pair<int,int>&a,pair<int,int>&b){
    if(a.F<b.F)return true;
    else if(a.F==b.F) return (a.S>b.S);
    else return false;
}
void solve(){
   int n,p;
   cin>>n>>p;
   vector<pair<int,int>>vpii;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    vpii.push_back({0,temp});
   }
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    vpii[i].F=temp;
   }

   sort(vpii.begin(),vpii.end(),custsort);
//    for(auto &i:vpii)cout<<i.F<<" "<<i.S<<endl;

//    cout<<"                 "<<endl;

//    if(vpii[0].F>=p)cout<<n*p<<endl;
//    else{
//     int cost=0;
//     int members=0;
//     for(int i=0;(i<n) && (members<n);i++){
//         cout<<i<<endl;
//         if(vpii[i].F<p){
        
//             cost+=p;
//             members++;
//             int newadded=0;
//             debug(members);
//             debug(cost);
//             while(members<n && newadded<vpii[i].second){
//                 cost+=vpii[i].F;
//                 members++;
//                 newadded++;
//                 debug(members);
//                 debug(cost);
//             }


//         }else break;
//     }
//     debug(members);
//     debug(cost);
//     cost+=(n-members)*p;
//     cout<<cost<<endl;
//    }

    if(vpii[0].F>=p)cout<<n*p<<endl;
    else{
        int membersknow=0;
        int members_thatcouldbeadded=0;
        ll cost=0;
        cost+=p;
        membersknow++;
        members_thatcouldbeadded=vpii[0].second;
        int idx=0;
        // debug(cost);
        // debug(members_thatcouldbeadded);
        // debug(membersknow);
        while(idx<n && membersknow<n){
            while(members_thatcouldbeadded>0 && membersknow<n){
                members_thatcouldbeadded--;
                membersknow++;
                cost+=vpii[idx].first;

        //         cout<<"                         "<<endl;
        //                 debug(cost);
        // debug(members_thatcouldbeadded);
        // debug(membersknow);
        //         cout<<"                          "<<endl;

            }
            if(membersknow==n)break;
            idx++;
            if(vpii[idx].first>=p)break;
            members_thatcouldbeadded+=vpii[idx].second;
        }
        cost+=(n-membersknow)*p;
        cout<<cost<<endl;

    }

   return;
}
int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}