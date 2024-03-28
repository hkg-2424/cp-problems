// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n" 
// void solve(){
//     int n;
//     cin>>n;
//     int cta=0,ctc=0;
//     string a,b;
//     cin>>a>>b;
//     vector<int>posa,posc;
//     int fb=INT_MAX,lb=INT_MIN;
//     string ans="YES";
//     for(int i=0;i<n;i++){
//         if(a[i]==b[i]){
//             if(a[i]=='b'){
//                 fb=min(fb,i);
//                 lb=max(lb,i);
//             }
//         }
//         else if(a[i]=='b' || b[i]=='b'){
//             ans="NO";
//             break;
//         }else if(a[i]=='a'){
//             posa.push_back(i);
//             cta++;
//             ctc--;
//         }else{
//             posc.push_back(i);
//             cta--;
//             ctc++;
//         }
//     }
//     if((cta!=0) || (ctc!=0) || (ans!="YES")){
//         cout<<"NO"<<endl;
//     }else{
//         for(int i=0;i<posa.size();i++){
//             if((fb>posa[i])&&(fb<posc[i]))continue;
//             else if(((lb>posa[i])&&(lb<posc[i])))continue;
//             else{
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }
//         cout<<"YES"<<endl;
//         return;
//     }
//     return;
// }
// int main(void){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll testcase=1;
//     cin>>testcase;
//     while(testcase--){
//          solve();
//     }
    
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    bool flag=true;
    vector<int>pa,pb,pc;
    int equal=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            if(a[i]=='b'){
                pb.push_back(i);
            }
        }else if(a[i]=='b' ||b[i]=='b'){
            flag=false;
            // cout<<"case1"<<endl;
            break;
        }
        else if(a[i]=='a'){
            pa.push_back(i);
            equal++;

        }else{
            pc.push_back(i);
            equal--;
        }
    }
    if(equal!=0)flag=false;
    int ia=0,ib=0,ic=0;
    if(flag){
    while(ia<pa.size()){
        while((ib<pb.size())&&(pb[ib]<pa[ia]))ib++;
        if(ib==pb.size()){
            flag=false;
            // cout<<"case2"<<endl;
            break;
        }
        while((ic<pc.size())&&(pc[ic]<pb[ib]))ic++;
        if(ic==pc.size()){
            flag=false;
            // cout<<"case3"<<endl;
            break;
        }
        ia++;
    }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase=1;
    cin>>testcase;
    while(testcase--){
         solve();
    }
    
    return 0;
}