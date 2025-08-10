/**
 * Author: iamsiamhossen
 * Created: 02-08-2025 21:15:24
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    auto ok = [&](int x)
    {
        return (binary_search(b.begin(), b.end(), x));
    };
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > 0)
        {
            cnt++;
            mp[a[i]]--;
        }
        else if (mp[a[i] - 1] > 0)
        {
            cnt++;
            mp[a[i] - 1]--;
        }
        else if (mp[a[i] + 1] > 0)
        {
            int tmp = a[i];
            tmp++;

            cnt++;
            mp[tmp]--;
        }
    }
    cout << cnt << endl;
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