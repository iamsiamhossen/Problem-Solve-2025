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

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2)
        cout << 9 << endl;
    else if (n == 3)
        cout << 29 << endl;
    else if (n == 4)
        cout << 56 << endl;
    else
    {
        int x = (n * n) - (n + 1);
        int ans = x;
        ans += x + 1;
        ans += x - 1;
        ans += x + n;
        ans += x - n;
        cout << ans << endl;
    }
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