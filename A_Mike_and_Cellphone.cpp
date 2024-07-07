#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define debug(x) cout << #x << " " << x << endl;
#define all(a) a.begin(), a.end()
#define pll pair<ll, ll>
#define F first
#define S second
#define ld long double
#define sz(v) (int)v.size()
#define endl "\n"
// hii my name is hkg
bool matrix[4][3];

bool checkxy(int x, int y)
{
    if (x >= 3 || y >= 4 ||x<0 || y<0)
        return true;
    else
        return matrix[y][x];
}

void solve()
{
    // for(int i=0;i<3;i++)for(int j=0;j<3;j++)cout<<matrix[i][j]<<endl;
    matrix[3][0] = matrix[3][2] = true;
    int n;
    cin >> n;
    string s;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            continue;
        }
        int x = (s[i] - '1') % 3;
        int y = (s[i] - '1') / 3;
        if (checkxy(x, y - 1))
        {
            ans = false;
            break;
        }
        else
        {
        }
    }
    if (ans)
    {
        cout << "NO" << endl;
        return;
    }
    ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans = false;
            break;

            continue;
        }
        int x = (s[i] - '1') % 3;
        int y = (s[i] - '1') / 3;
        if (checkxy(x - 1, y))
        {
            ans = false;
            break;
        }
        else
        {
        }
    }
    if (ans)
    {
        cout << "NO" << endl;
        return;
    }
    ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans = false;
            break;

            continue;
        }
        int x = (s[i] - '1') % 3;
        int y = (s[i] - '1') / 3;
        if (checkxy(x + 1, y))
        {
            ans = false;
            break;
        }
        else
        {
        }
    }
    if (ans)
    {
        cout << "NO" << endl;
        return;
    }
    ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans = false;
            break;

            continue;
        }
        int x = (s[i] - '1') % 3;
        int y = (s[i] - '1') / 3;
        if (checkxy(x, y + 1))
        {
        }
        else
        {
            ans = false;
        }
    }
    if (ans)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        return;
    }

    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll testcase = 1;
    //    cin>>testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}