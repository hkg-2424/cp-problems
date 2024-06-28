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

// void solve(){
//    string a,b;
//    cin>>a>>b;
//    int idx=-1;
//    int aheadidx=-1;
//    for(int i=0;i<a.size();i++){
//     bool milgaya=false;
//     for(int j=0;j<b.size();j++){
//         if(a[i]==b[j]){
//             idx=i;
//             aheadidx=j;
//             milgaya=true;
//             break;
//         }
//         if(milgaya)break;
//     }
//    }
//    if(idx==-1){
//     cout<<a.size()+b.size()<<endl;
//     return;
//    }
//    int agekebaadcommon=aheadidx;
//    while(idx<a.size() && agekebaadcommon<b.size()){
//     if(a[idx]==b[agekebaadcommon]){
//         agekebaadcommon++;
//     }
//     idx++;
//    }
//    idx=a.size()-1;
//    int behindidx=b.size()-1;
//    for(int i=a.size()-1;i>=0;i--){
//     bool milgaya=false;
//     for(int j=b.size()-1;j>=0;j--){
//         if(a[i]==b[j]){
//             milgaya=true;
            
//             idx=i;
//             behindidx=j;
//             break;
//         }
//     }
//      if(milgaya)break;
//    }
//    int pichkebaadcommon=behindidx;
//    while(idx>=0 && pichkebaadcommon>=0){
//     if(a[idx]==b[pichkebaadcommon]){
//         pichkebaadcommon--;
//     }
//     idx--;
//    }
//     // cout<<(agekebaadcommon-aheadidx)<< " "<<behindidx-pichkebaadcommon<<endl;
//    cout<<a.size()+b.size()-max((agekebaadcommon-aheadidx),behindidx-pichkebaadcommon)<<endl;

//    return;
// }

// void solve1(){
//     string a,b;
//     cin>>a>>b;
//     memset(firstidx,-1,26);
//     for(int i=0;i<a.size();i++){
//         firstidx[a[i]-'a'].pb(i);
//     }
//     int maxcommon=0;
//     for(int i=0;i<b.size();i++){
//         if(firstidx[b[i]].empty())continue;
//         else{
//             int abhitakcommon=0;
//             int kahatakdekhlia=firstidx[b[i]-'a'];
//             for(int j=i+1;j<b.size();j++){
//                 int abkebadcommon=1;
//                 for(int k=kahatakdekhlia+1;k<a.size();k++){
//                     if(a[k]==b[j]){
//                         abkebadcommon++;
//                         kahatakdekhlia=k;
//                         break;
//                     }
//                 }
//                 abhitakcommon=max(abhitakcommon,abkebadcommon);

//             }
//             maxcommon=max(abhitakcommon,maxcommon);
//         }
//     }
//     cout<<a.size()+b.size()-maxcommon;
    

// }


vector<int> firstidx[26];
int agesedekha(string &a,string &b,int i){
    int ans=0;
        for(auto &idx:firstidx[b[i]-'a']){
            int abhitakcommon=1;
            int acovered=idx;
            for(int j=i+1;j<b.size();j++){
                char c=b[j];
                bool mila=false;
                for(int k=acovered+1;k<a.size();k++){
                    if(a[k]==c){
                        acovered=k;
                        mila=true;
                        break;
                    }
                }
                if(mila){
                    abhitakcommon++;
                }else{
                    break;
                }

            }
        }
    return ans;
}

int pichsekedekha(string &a,string &b,int i){
    int ans=0;
    for (auto &idx:firstidx[b[i]-'a']){
        int abhitakcommon=1;
        int acovered=idx;
        for(int j=i-1;j>-1;j-- ){
            char c=b[j];
            bool mila=false;
            for(int k=acovered-1;k>-1;k--){
                if(a[k]==c){
                    mila=true;
                    acovered=k;
                    
                    break;
                }
            }
            if(mila){
                abhitakcommon++;
            }else{
                break;
            }
        }
        ans=max(abhitakcommon,ans);
    }
    return ans;
}

void solve2(){
    string a,b;
    cin>>a>>b;
    for(auto &i:firstidx)i.clear();
    for(int i=0;i<a.size();i++){
        firstidx[a[i]-'a'].pb(i);
    }
    int maxcommon=0;
    for(int i=0;i<b.size();i++){
        if(firstidx[b[i]-'a'].empty())continue;
        else{
            // int abhitakcommon=1;
            // int acovered=firstidx[b[i]-'a'];
            // for(int j=i+1;j<b.size();j++){
            //     char c=b[j];
            //     bool mila=false;
            //     for(int k=acovered+1;k<a.size();k++){
            //         if(a[k]==c){
            //             acovered=k;
            //             mila=true;
            //             break;
            //         }
            //     }
            //     if(mila){
            //         abhitakcommon++;
            //     }else{
            //         break;
            //     }

            // }
            // maxcommon=max(abhitakcommon,maxcommon);
            maxcommon=max(maxcommon,max(agesedekha(a,b,i),pichsekedekha(a,b,i)));
        }
    }
    cout<<a.size()+b.size()-maxcommon<<endl;;
    

}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve2();
   }
   return 0;
}