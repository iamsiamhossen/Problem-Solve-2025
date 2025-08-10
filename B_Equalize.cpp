/**
 * Author: iamsiamhossen
 * Created: 15-07-2025 13:10:15
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
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    vector<int> v;
    for (auto u : a)
    {
        v.push_back(u);
    }
    int i = 0, j = 0, ans = 1;
    while (j < v.size())
    {
        if (v[j] - v[i] < n)
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;
    // for (auto u : a)
    // {
    //     cout << u << " ";
    // }
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