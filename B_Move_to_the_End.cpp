/**
 * Author: iamsiamhossen
 * Created: 30-04-2025 10:18:39
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
    vector<int> a(n);
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    int sum = 0;
    if (n == 1)
        cout << a[0] << endl;
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << sum + *s.rbegin() << " ";
            s.erase(s.find(a[i]));
            sum += a[i];
        }
        cout << endl;
    }

    // cout << sum << endl;
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