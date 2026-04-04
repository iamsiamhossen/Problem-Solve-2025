/**
 * Author: iamsiamhossen
 * Created: 27-08-2025 15:45:30
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
    vector<int> a(n);
    for (auto &u : a)
        cin >> u;
    // sort(all(a));
    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    int chk = INT_MIN;
    int chk2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            chk = max(chk, a[i]);
        }
        else
        {
            chk2 = min(chk2, a[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (m & 1)
        {
            if (a[i] & 1)
            {
                a[i] = a[i] + m;
            }
        }
        else if (!(m & 1))
        {
            if (a[i] != chk and (a[i] & 1))
            {
                int x = chk - a[i];
                if (x == m * m or x == m)
                {
                    a[i] += x;
                }
            }
            else
            {
                int t1 = a[i] + m;
                int t2 = a[i] + (m * m);
                if (a[i] != chk2 and !(a[i] & 1))
                {
                    if ((t1 % chk2) == 0)
                    {
                        a[i] = t1;
                    }
                    else
                    {
                        a[i] = t2;
                    }
                }
            }
        }
    }
    for (auto u : a)
    {
        cout << u << " ";
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