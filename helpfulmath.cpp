#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>c;
    for(int i=0;i<s.size();i+=2){
        c.push_back(s[i]);
    }
    sort(c.begin(),c.end());
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            cout<<c[i/2];
        }else cout<<s[i];
    }
    return 0;
}
