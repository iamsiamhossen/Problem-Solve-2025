/**
 * Author: iamsiamhossen
 * Created: 06-07-2025 20:36:49
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_sorted(all(a)))
    {
        NO;
        return;
    }
    else
    {
        b = a;
        sort(all(b));
        vector<int> s;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                s.push_back(a[i]);
            }
        }
        cout << "YES" << endl;
        cout << s.size() << endl;
        for (auto it : s)
        {
            cout << it << " ";
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