/**
 * Author: iamsiamhossen
 * Created: 01-08-2025 20:01:45
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
    int x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    int n = s[y - 1] - '0';
    int m = s[z - 1] - '0';
    
    if (n == 0 and m == 0)
    {
        NO;
        return;
    }
    if (n == 0 or m == 0)
    {
        YES;
        return;
    }
    if ((n % m) == 0 or (m % n) == 0)
    {
        YES;
    }
    else
    {
        NO;
    }
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