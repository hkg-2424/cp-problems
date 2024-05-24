#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cout<<i<<"error";
            return 0;
        }
    }
    return 0;
}