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
bool ajubajuhekya(string &enemy,string &gregor,int idx,vector<bool>& enemybooked){
    if(idx-1>=0){
        if(enemy[idx-1]=='1' && enemybooked[idx-1]==true){
            enemybooked[idx-1]=false;
            return true;
        }
    }
    if(idx+1<enemy.size()){
        if(enemy[idx+1]=='1' && enemybooked[idx+1]==true){
            enemybooked[idx+1]=false;
            return true;
        }    
    }
    return false;
}

void solve(){
    // cout<<"hello"<<endl;
   int n;
   cin>>n;
   string enemy,gregor;
   cin>>enemy>>gregor;
   vector<bool>enemybooked(n,false);
   for(int i=0;i<n;i++){
    if(enemy[i]=='1')enemybooked[i]=true;
   }
   int ans=0;
   for(int i=0;i<n;i++){
    if(gregor[i]=='1'){
        if(enemy[i]=='0'){
            if( i-1>=0 && enemybooked[i-1]==true){
                enemybooked[i-1]=false;
            }
            ans++;
        }
        else{
            if(ajubajuhekya(enemy,gregor,i,enemybooked))ans++;
            
        }
    }
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