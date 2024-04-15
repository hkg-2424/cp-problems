#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"

void solve(){
//    ll n;
//    cin>>n;
//    vector<int>v(n+1);
//    int idxmax=0;
//    ll max=0;
//    for(int i=1;i<=n;i++){
//     cin>>v[i];
//     if(v[i]>=max){
//         max=v[i],idxmax=i;
//     }
//    }
//    v[0]=0;
   
//    ll low;
//    int id=1;
//    while(id<=n && v[id]==v[idxmax])id++;
//    low=id;
//    ll high=low+1;
//    ll lhigh=0;
//    bool ans=false;
//    while(high<=n && !ans){
//         if(v[high]> v[low]){
//             lhigh=high+1;
//             while(lhigh<=n && v[high]==v[lhigh])lhigh++;
//             while(lhigh<=n && v[high]<v[lhigh]){
//                 lhigh++;
//             }
//             if(lhigh>n){
//                 low=low+1;
//                 high=low+1;
//                 continue;
//             }else{
//                 ans=true;
//                 break;
//             }
//         }else{
//             high++;
//             continue;
//         }
//    }
//    if(ans){
//     cout<<"YES"<<endl;
//     cout<<low<<" "<<high<<" "<<lhigh<<endl;

//    }else cout<<"NO"<<endl;
//    return;
    // ll n;
    // cin>>n;
    // vector<int>v(n+1);
    // for(int i=1;i<=n;i++)cin>>v[i];
    // v[0]=0;
    // // int high=0,low=0,thigh=0;
    // for(int i=1;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(v[j]>v[i]){
    //             for(int k=j+1;k<=n;k++){
    //                 if(v[k]<v[j]){
    //                     cout<<"YES"<<endl;
    //                     cout<<i<<" "<<j<<" "<<k<<endl;
    //                     return;
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout<<"NO"<<endl;
    // return;
    // ll n;
    // cin>>n;
    // vector<pair<int,int>>v;
    // for(int i=0;i<n;i++){
    //     int temp;
    //     cin>>temp;
    //     v.push_back(make_pair(temp,i+1));
    // }
    // sort(v.begin(),v.end());
    // int low=0,high=low+1,thigh=high-1;
    // while(low<n){
    //     high=low+1;
    //     while(high<n && ((v[low].first==v[high].first )||(v[low].second<v[high].second))) high++;
    //     if(high==n){
    //         low++;
    //         continue;
            
    //     }else{
    //         thigh=high-1;
    //         while(thigh>=0 &&((v[high].first==v[thigh].first)||(v[high].second)<v[thigh].second)){
    //             thigh--;

    //         }
    //         if(thigh>0){
    //             while(v[thigh].second<v[low].second)thigh--;
    //             if(thigh>0){
    //                 cout<<"YES"<<endl;
    //             cout<<v[low].second<<" "<<v[high].second<<" "<<v[thigh].second<<endl;
    //             return;
    //             }else{
    //                 low++;
    //                 continue;
    //             }
                
    //         }
    //         else{
    //             low++;
    //             continue;
    //         }
    //     }
    // }
    ll n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=1;i<n-1;i++){
        int low=i-1;
        while(low>=0 && (v[low]>v[i]))low--;
        if(low<0)continue;
        int high=i+1;
        while(high<n && (v[high]>v[i]))high++;
        if(high<n){
            cout<<"YES"<<endl;
            cout<<low+1<<" "<<i+1<<" "<<high+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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