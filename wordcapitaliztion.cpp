#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]<'a')cout<<s<<endl;
    else{
        s[0]=s[0]+'A'-'a';
        cout<<s<<endl;
    }
    return 0;
}
