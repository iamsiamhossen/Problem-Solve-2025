/**
 * Author: iamsiamhossen
 * Created: 25-04-2025 22:46:42
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
    string x;
    cin >> x;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        if (x.find(s) != string::npos)
        {
            cout << cnt << endl;
            return;
        }
        else
        {
            if (x.size() > m * 2)
            {
                cout << -1 << endl;
                return;
            }
            else
            {
                cnt++;
                x += x;
            }
        }
    }
    cout << -1 << endl;
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