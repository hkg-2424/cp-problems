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

void solve1(){
   int n;
   cin>>n;
   char arr[2][n];
   for(int i=0;i<2;i++){
    for(auto &j:arr[i])cin>>j;
   }
   bool ispossible=true;
   for(int i=0;i<n;i++){
    if(arr[0][i]=='1'&&arr[1][i]=='1'){
        ispossible=false;
        break;
    }
   }
   if(ispossible){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
   return;
}
bool pathexists(vector<char[2]>&arr,int n, int x,int y){
    if(x==n-1)return true;
    if(arr[x+1][y]=='0'){
        return pathexists(arr,n,x+1,y);
    }else if(y==1 && arr[x+1][y-1]=='0'){
        return pathexists(arr,n,x+1,y-1);
    }else if(y==0 && arr[x+1][y+1]=='0'){
        return pathexists(arr,n,x+1,y+1);
    }else{
        return false;
    }
}
void solve2(){
   int n;
   cin>>n;
   vector<char[2]>v(n);
   for(int i=0;i<2;i++){
    for(auto &j:v)cin>>j[i];
   } 
   if(pathexists(v,n,0,0))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}
void solve3(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='1')arr[i]++;
    }
    bool ispossible=true;
        for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='1'){
            arr[i]++;
            if(arr[i]==2)ispossible=false;
        }
    }
     if(ispossible){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
   cin>>testcase;
   while(testcase--){
       solve3();
   }
   return 0;
}