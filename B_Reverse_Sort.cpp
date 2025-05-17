/**
 * Author: iamsiamhossen
 * Created: 15-05-2025 14:11:19
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (is_sorted(s.begin(), s.end()))
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        string x = s;
        sort(all(x));
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != x[i])
                ans.push_back(i + 1);
        }
        cout << 1 << endl;
        cout << ans.size() << " ";
        sort(all(ans));
        for (auto u : ans)
        {
            cout << u << " ";
        }
        cout << endl;
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