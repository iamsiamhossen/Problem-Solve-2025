/**
 * Author: iamsiamhossen
 * Created: 11-08-2025 22:16:22
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
vector<int> sliding_min(vector<int> a, int k)
{
    deque<int> q;
    vector<int> r;
    for (int i = 0; i < a.size(); i++)
    {
        while (!q.empty() && a[q.back()] >= a[i])
            q.pop_back();
        q.push_back(i);
        if (q.front() <= i - k)
            q.pop_front();
        if (i >= k - 1)
            r.push_back(a[q.front()]);
    }
    return r;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int x, a, b, c;
    cin >> x >> a >> b >> c;
    vector<int> v(n);
    v[0] = x;
    for (int i = 1; i < n; i++)
    {
        v[i] = (a * v[i - 1] + b) % c;
    }
    vector<int> z = sliding_min(v, k);
    int ans = 0;
    for (auto u : z)
        ans ^= u;

    cout<<ans<<endl;
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