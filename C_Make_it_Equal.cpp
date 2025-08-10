/**
 * Author: iamsiamhossen
 * Created: 10-08-2025 22:01:10
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> x;
    for (auto u : a)
    {
        x.push_back(abs(k - u));
        x.push_back(abs(k + u));
    }
    bool ok = true;
    int cnt = 0;
    sort(x.begin(), x.end());
    map<int, int> m;
    for (auto u : b)
    {
        int c = abs(u - k);
        if (binary_search(x.begin(), x.end(), u) and m[u] < 1)
        {
            m[u]++;
            cnt++;
        }
        if ((binary_search(x.begin(), x.end(), c)) and m[c] < 1)
        {
            m[c]++;
            cnt++;
        }
    }
    if (cnt >= n)
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