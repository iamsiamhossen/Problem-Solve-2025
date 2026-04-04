/**
 * Author: iamsiamhossen
 * Created: 17-12-2025 18:23:00
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x;
    cin >> x;
    string ans;
    for (auto u : s)
    {
        if (u == 'a')
        {
            ans += u;
        }
        else
        {
            int mt = 26 - (u - 'a');
            if (x > 0 and mt <= x)
            {
                ans += 'a';
                x -= mt;
            }
            else
            {
                ans += u;
            }
        }
    }
    if (x > 0)
    {
        char c = ans[ans.size() - 1];
        int pos = (c - 'a' + x) % 26;
        ans[ans.size() - 1] = 'a' + pos;
    }
    cout << ans << endl;
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