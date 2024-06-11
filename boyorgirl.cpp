#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(arr[i])ans++;
    }
    if((ans&1)==1)cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
