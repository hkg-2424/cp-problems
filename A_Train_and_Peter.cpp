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
   string atob;
   string seq1,seq2;
   cin>>atob>>seq1>>seq2;
   int n=atob.size();
   vector<int>seq1pos,seq1posrev,seq2pos,seq2posrev;
   int found=0;
   found=atob.find(seq1);
    if(found!=string::npos){
        seq1pos.push_back(found);
        while(found+seq1.size()<n){
            found=atob.find(seq1,found+seq1.size());
            if(found!=string::npos){
                seq1pos.push_back(found);
            }
        }
    }
    if(seq1pos.size()!=0){
        found=0;
        found=atob.find(seq2,seq1pos[0]);
        if(found!=string::npos){
            seq2pos.push_back(found);
            while(found+seq2.size()<n){
                found=atob.find(seq1,found+seq2.size());
                if(found!=string::npos){
                    seq2pos.push_back(found);
                }
            }
        }
    }

    found=0;
    atob=reverse(all(atob));
    seq1=reverse(seq1.begin(),seq1.end());
    seq2=reverse(seq2.begin(),seq2.end());
    found=atob.find(seq1);
    if(found!=string::npos){
        seq1posrev.push_back(found);
        while(found+seq1.size()<n){
            found=atob.find(seq1,found+seq1.size());
            if(found!=string::npos){
                seq1posrev.push_back(found);
            }
        }
    }

    if(seq1posrev.size()!=0){
        found=0;
        found=atob.find(seq2,seq1posrev[0]);
        if(found!=string::npos){
        seq2posrev.push_back(found);
        while(found+seq2.size()<n){
            found=atob.find(seq1,found+seq2.size());
            if(found!=string::npos){
                seq2posrev.push_back(found);
            }
        }
    }
    }

    for(auto &i:seq1pos)cout<<i<<" ";
    cout<<endl;
    for(auto &i:seq1posrev)cout<<i<<" ";
    cout<<endl;
    for(auto &i:seq2pos)cout<<i<<" ";
    cout<<endl;
    for(auto &i:seq2posrev)cout<<i<<" ";
    cout<<endl;




   
   return;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll testcase=1;
//    cin>>testcase;
   while(testcase--){
       solve();
   }
   return 0;
}