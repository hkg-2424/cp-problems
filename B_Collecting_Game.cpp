// #include<bits/stdc++.h>
// using namespace std;


// #define int long long 
// #define pb(x) push_back(x)
// #define debug(x) cout<<#x<<" "<<x<<endl;
// #define all(a) a.begin(),a.end()
// #define pll pair <ll,ll>
// #define F first
// #define S second 
// #define ld long double
// #define sz(v) (int)v.size()
// #define endl "\n"
// // hii my name is hkg

// void solve(){
//    int n;
//    cin>>n;
//    vector<int>a,b;
//    for(int i=0;i<n;i++){
//     int temp;
//     cin>>temp;
//     a.push_back(temp);
//     b.push_back(temp);
//    }
//    sort(b.begin(),b.end());
//    vector<int>sum(n+1,0);
//    for(int i=0;i<n;i++){
//     sum[i+1]=sum[i]+b[i];
//    }
//    for(int i=0;i<n;i++){
//     int it=lower_bound(all(b),a[i])-b.begin();
//     while( it+1<b.size() && b[it]==b[it+1])it++;
//     int ans=max(0LL,it);
//     // for(int j=it;j<b.size()-1;j++){
//     //     if(b[j+1]<=(sum[j+1])) ans++;
//     //     else break;
//     // }
//     int oldit=it;
//     while(it<b.size()){
//         it=lower_bound(all(b),sum[it+1])-b.begin();
//         if(it==b.size()){
//             ans=n-1;
//             break;
//         }
//         if(b[it]>sum[oldit+1])it--;
//         if(it==oldit)break;
//         while( it+1<b.size() && b[it]==b[it+1])it++;
//         ans+=(it-oldit);
//         oldit=it;
//     }
//     cout<<ans<<" ";
 
//    }
//    cout<<endl;
//    return;
// }
// int32_t main(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int testcase=1;
//    cin>>testcase;
//    while(testcase--){
//        solve();
//    }
//    return 0;
// }




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
   vector<pair<int,int>>vp(n+1);
   for(int i=1;i<=n;i++)cin>>vp[i].first,vp[i].second=i;
   sort(vp.begin()+1,vp.end());
   vector<int>nums(n+1),ans(n+1);
   vector<ll>sum(n+1);
   nums[0]=sum[0]=0;
   for(int i=1;i<=n;i++){
    if(nums[i-1]>=i){
        nums[i]=nums[i-1];
        sum[i]=sum[i-1];

    }else{
        nums[i]=i;
        sum[i]=sum[i-1]+vp[i].first;
        while(nums[i]+1<=n && sum[i]>=vp[nums[i]+1].first){
            sum[i]+=vp[nums[i]+1].first;
            nums[i]++;
        }
    }
    ans[vp[i].second]=nums[i];
   }
   for(int i=1;i<=n;i++)cout<<ans[i]-1<<" ";
   cout<<endl;
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