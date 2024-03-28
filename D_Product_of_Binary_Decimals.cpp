#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n" 
bool isbinary(int n){
    while(n>0){
        if((n%10)>1){
            return false;
        }
        n=(n/10);
    }
    return true;
}
vector<int>binary;
void solve(){
    bool flag=true;
    int n;
    cin>>n;
    if(isbinary(n)){
        flag=true;
    }else{
        
        while(n>1){
            bool div=false;
            for(int i=0;i<binary.size();i++){
                // cout<<binary[i]<<" "<<n<<endl;
                if((n%binary[i])==0){
                    n=(n/binary[i]);
                    div=true;
                    break;
                }
            }
            if(div==false){
                flag=false;
                break;
            }
        }


    }




    cout<<(flag?"YES":"NO")<<endl;

     return;
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase=1;
    cin>>testcase;
    
    binary.push_back(10);
    binary.push_back(11);
    binary.push_back(101);
    binary.push_back(111);
    binary.push_back(1001);
    binary.push_back(1011);
    binary.push_back(1101);

    binary.push_back(10001);
    binary.push_back(11001);
    binary.push_back(10101);
    binary.push_back(10011);

    binary.push_back(11101);
    binary.push_back(10111);
    binary.push_back(11101);

    binary.push_back(11111);

    


    while(testcase--){
         solve();
    }
    
    return 0;
}