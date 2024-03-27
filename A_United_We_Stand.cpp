//https://codeforces.com/contest/1859/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b, c;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }



    sort(a.begin(), a.end());



    int idx = 0;
    for (idx = 0; idx < (n / 2); idx++)
    {
        b.push_back(a[idx]);
        
        while (((idx + 1) < n) && (a[idx + 1] == a[idx]))
        {
            idx++;
            b.push_back(a[idx]);
            
        }
    }
    for (; idx < n; idx++)
    {
        c.push_back(a[idx]);

    }
    if(c.size()==0){
        idx=1;
        
        while( (idx<n)&&b[idx]==b[idx-1] )idx++;
        int ct=0;
        for(;idx<n;idx++){
            c.push_back(b[idx]);
            ct++;
        }
        while(ct--)b.pop_back();
    }

    if ((c.size() == 0) && (cout << -1 << endl))
    {
        return;
    }
    cout << b.size() << " " << c.size() << endl;
    ;
    for (auto &i : b){
        cout << i << " ";
    }
    cout << endl;
    for (auto &i : c)
        cout << i << " ";
    cout << endl;
    return;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }

    return 0;
}