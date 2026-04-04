/**
 * Author: iamsiamhossen
 * Created: 30-08-2025 12:12:06
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
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int cntz = 0, cnto = 0;
    int l = 0;
    while (l < n)
    {
        if (s[l] == '1')
        {
            while (s[l] == '1')
            {
                cnto++;
                l++;
                if (cnto >= m)
                {
                    NO;
                    return;
                }
            }
        }
        else
        {
            cnto = 0;
            l++;
        }
    }

    YES;
    int x = n;
    int y = 1;
    for (auto u : s)
    {
        if (u == '0')
        {
            cout << x << " ";
            x--;
        }
        else
        {
            cout << y << " ";
            y++;
        }
    }
    cout << endl;
}
int32_t main()
{
    fastread();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}