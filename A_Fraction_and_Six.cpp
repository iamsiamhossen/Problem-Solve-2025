/**
 * Author: iamsiamhossen
 * Created: 31-10-2026 20:41:40
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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    sort(all(a));
    sort(all(b));
    if (n <= m)
    {
        NO;
        return;
    }
    string s;
    int i = 0, j = 0;
    for (i = 0; i < a.size();)
    {
        if (a[i] != b[j])
        {
            s += a[i];
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }
    // cout << j << endl;
    for (int j = i; j < a.size(); j++)
    {
        s += a[i];
    }
    string c = "isx";
    if (c == s and j == b.size())
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