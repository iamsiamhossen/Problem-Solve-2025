/**
 * Author: iamsiamhossen
 * Created: 28-05-2025 22:23:52
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double
#define all(X) (X).rbegin(), (X).rend()
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
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    // Shala lamda function r koto jalabi
    sort(s.begin(), s.end(), [&](const string &s, const string &t)
         { return s.size() < t.size(); });
         

    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i + 1].find(s[i]) == string::npos)
        {
            NO;
            return;
        }
    }

    YES;
    for (auto u : s)
        cout << u << endl;
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