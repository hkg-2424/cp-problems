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
//    vector<int>a,b;
//    cin>>n;
//    map<int,vector<pair<int,int>>>mpa,mpb;
//    int last,lastidx;
//    int temp;
//    for(int i=0;i<n;i++){
    
//     cin>>temp;
//     a.push_back(temp);
//     if(mpa.size()==0){
//         cout<<"mapintialized"<<endl;
//         last=temp;
//         lastidx=i;
//     }else if(temp!=last){
//         mpa[last].pb(make_pair(lastidx,i-1));
//         last=temp;
//         lastidx=i;
//         cout<<"mapme dala"<<endl;
//     }
//    }
   
//     mpa[last].push_back(make_pair(lastidx,n-1));
   





//    for(int i=0;i<n;i++){
    
//     cin>>temp;
//     b.push_back(temp);
//     if(mpb.empty()){
//         last=temp;
//         lastidx=i;
//     }else if(temp!=last){
//         mpb[last].pb(make_pair(lastidx,i-1));
//         last=temp;
//         lastidx=i;
//     }
//    }

   
//     mpb[last].push_back(make_pair(lastidx,n-1));;
//     cout<<mpb.size()<<" "<<mpa.size()<<endl;

//     // for(auto &i:mapa){
//     //     cout<<i.first<<endl;
//     //     for(auto j:i.second)cout<<j.first<<" "<<j.second<<endl;
//     //     cout<<endl;
//     // }
//     // for(auto &i:mapb){
//     //     cout<<i.first<<endl;
//     //     for(auto j:i.second)cout<<j.first<<" "<<j.second<<endl;
//     //     cout<<endl;
//     // }
   
// //    int ans=0;
// //    for(auto &i:mapa){
// //     int tempans=0;
// //     pair<int,int>a;
// //     for(auto &a:i.second){
// //         tempans=max(a.second-a.first+1,tempans);
// //     }
// //     if(mapb[i.first].empty()){
// //         ans=max(tempans,ans);
// //     }else{
// //         for(auto &j:mapb[i.first]){
// //             tempans=max(tempans+j.second-j.first+1,tempans);
// //         }
// //         ans=max(tempans,ans);
// //     }
// //    }
// //    cout<<ans<<endl;
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
   unordered_map<int,int>a,b;
   int last=-1;
   int lastindex=-1;
   int temp;
   for(int i=0;i<n;i++){
    
    cin>>temp;
    if(a.empty()){
        last=temp;
        lastindex=i;
        a[last]=1;
    }else if(temp!=last){
        a[last]=max(a[last],i-lastindex);
        last=temp;
        lastindex=i;
    }
   }
   a[last]=max(a[last],n-lastindex);




   for(int i=0;i<n;i++){
    
    cin>>temp;
    if(b.empty()){
        last=temp;
        lastindex=i;
        b[last]=1;
    }else if(temp!=last){
        b[last]=max(b[last],i-lastindex);
        last=temp;
        lastindex=i;
    }
   }
   b[last]=max(b[last],n-lastindex);

//    cout<<a.size()<<endl;
//    cout<<b.size()<<endl;
    int ans=0;
    for(auto &i:a){
        ans=max(ans,i.second+b[i.first]);
    }
    for(auto &i:b){
        ans=max(ans,i.second+a[i.first]);
    }
    cout<<ans<<endl;
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