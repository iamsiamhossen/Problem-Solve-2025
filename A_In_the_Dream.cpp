/**
 * Author: iamsiamhossen
 * Created: 28-08-2025 21:07:18
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
    int n, a, m, c;
    cin >> n >> a >> m >> c;
    m = abs(m - n);
    c = abs(c - a);
    if (n > a)
        swap(n, a);
    if (m > c)
        swap(m, c);
    int x = 2 * min(n, a) + 2;
    int y = 2 * min(m, c) + 2;
    if (x >= a and y >= c)
        YES;
    else
        NO;
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