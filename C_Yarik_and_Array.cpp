// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define pb(x) push_back(x)
// // #define debug(x) cout<<#x<<" "<<x<<endl;
// // #define all(a) a.begin(),a.end()
// // #define pll pair <ll,ll>
// // #define F first
// // #define S second 
// // #define ld long double
// // #define sz(v) (int)v.size()
// // #define endl "\n"
// // // hii my name is hkg

// // void solve(){
// //    int n;
// //    cin>>n;
// //     vector<int>arr(n);
// //     for(auto &i:arr)cin>>i;
// //     int ans=arr[0];
// //     int mn=min(0,arr[0]),sum=arr[0];
// //     for(int i=1;i<n;i++){
// //         if(abs(arr[i]%2)==abs(arr[i-1]%2)){
// //             sum=0;
// //             mn=0;
// //         }
// //         sum+=arr[i];
// //         ans=max(ans,sum-mn);
// //         mn=min(mn,sum); 
// //     }
// //     cout<<ans<<endl;
    

// //    return;
// // }
// // int main(){
// //    ios::sync_with_stdio(false);
// //    cin.tie(nullptr);
// //    ll testcase=1;
// //    cin>>testcase;
// //    while(testcase--){
// //        solve();
// //    }
// //    return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
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
//    int b=0;
//    cin>>b;
//    int sum=b;
//    int par=abs(b)%2;
//    int ans=b;
//    for(int i=1;i<n;i++){
//     cin>>b;
//     if(abs(b)%2==par){
//         sum=b;
//     }else{
//         sum+=b;
//     }
//     par=abs(b)%2;
//     if(b>sum)sum=b;
//     ans=max(ans,sum);
//    }
//    cout<<ans<<endl;
//    return;
// }
// int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    ll testcase=1;
//    cin>>testcase;
//    while(testcase--){
//        solve();
//    }
//    return 0;
// }

