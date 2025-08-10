/**
 * Author: iamsiamhossen
 * Created: 07-08-2025 22:08:59
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
    if (m == 1 || m == n or !(count(s.begin(), s.end(), '#')))
    {
        cout << 1 << endl;
        return;
    }
    int ngr = 0, ngl = 0;
    for (int i = m; i < n; i++)
    {
        if (s[i] == '#')
        {
            break;
        }
        ngr++;
    }
    for (int i = m - 2; i >= 0; i--)
    {
        if (s[i] == '#')
        {

            break;
        }
        ngl++;
    }

    // cout << ngl << " " << ngr << " " << endl;
    int cntal = 0, cntar = 0;
    for (int i = m; i < n; i++)
    {
        cntar++;
    }
    for (int i = (m - 2); i >= 0; i--)
    {
        cntal++;
    }
    // cout << cntal << " "
    //      << cntar;
    if (min(ngl, ngr) == ngr)
    {
        if (min(cntar, cntal) == cntar)
        {
            int ans = cntar + 1;
            for (int i = m; i < n; i++)
            {
                if (s[i] == '.')
                    ans--;
                else
                    break;
            }
            cout << ans << endl;
        }
        else
        {
            int ans = cntal + 1;
            for (int i = m - 2; i >= 0; i--)
            {
                if (s[i] == '.')
                    ans--;
                else
                    break;
            }

            if (s[m - 2] == '.')
                cout << ans + 1 << endl;
            else
                cout << ans << endl;
        }
    }
    else
    {
        if (min(cntar, cntal) == cntal)
        {
            int ans = cntal + 1;
            for (int i = m - 2; i >= 0; i--)
            {
                if (s[i] == '.')
                    ans--;
                else
                    break;
            }
            cout << ans << endl;
        }
        else
        {
            int ans = cntar + 1;
            for (int i = m; i < n; i++)
            {
                if (s[i] == '.')
                    ans--;
                else
                    break;
            }
            if (s[m] == '.')
                cout << ans + 1 << endl;
            else
                cout << ans << endl;
        }
    }

    // int ans1 = 1 + cntal;
    // int ans2 = 1 + cntar;
    // cout << min(cntal, cntar) + 1 << endl;
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