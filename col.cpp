/**
 * Author: iamsiamhossen
 * Created: 05-12-2025 17:58:11
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define all(X) (X).begin(), (X).end()
#define Reverse(X) reverse(All(X))
#define Unique(X) (X).erase(unique((X).begin(), (X).end()), (X).end())
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
// MOD
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF 1001001001
// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    string s;
    cin >> s;
    // cout << s << endl;
    string a;
    string b;
    string c;
    int x = -1, y = -1;
    for (auto i = 0; i <= s.size() - 1; i++)
    {
        if (s[i] == '=')
        {
            x = i;
        }
        if (s[i] == '+')
        {
            y = i;
        }
    }
    c = s.substr(0, x + 1);
    a += s.substr(x + 1, y - x - 1);
    b += s.substr(y + 1, s.size() - y - 1);
    cout << c;
    int cnt = 0, cnt1 = 0;
    int chkcnt1 = 0;
    reverse(all(a));
    // cout << a;
    string ap;
    for (auto u : a)
    {
        if (u >= '0' and u <= '9' and chkcnt1 <= 1)
        {
            cnt1++;
            if (cnt1 == 4)
            {
                chkcnt1++;
                ap += '\'';
                ap += u;
                cnt1 = 1;
            }
            else
            {
                ap += u;
            }
        }
        else
        {
            cnt1 = 0;
            ap += u;
        }
    }
    reverse(all(ap));
    cout << ap << "+";
    reverse(all(b));
    string bp;
    int chkcnt = 0;
    for (auto u : b)
    {

        if ((u >= '0' && u <= '9') and chkcnt <= 1)
        {
            cnt++;
            if (cnt == 4)
            {
                chkcnt++;
                bp += '\'';
                bp += u;
                cnt = 1;
            }
            else
            {
                bp += u;
            }
        }
        else
        {
            cnt = 0;
            bp += u;
        }
    }
    reverse(all(bp));
    cout << bp << endl;
}

int32_t main()
{
    fastread();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}