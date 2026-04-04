/**
 * Author: iamsiamhossen
 * Created: 14-08-2025 10:01:58
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
    vector<int> b, c;
    int j = 0;
    sort(all(a));
    while (j < n)
    {
        if (a[j] == a[j + 1])
        {
            b.push_back(a[j]);
            j++;
        }
        else
        {
            b.push_back(a[j]);
            j++;
            break;
        }
    }
    for (int i = j; j < n; j++)
    {
        c.push_back(a[j]);
    }
    if (b.size() > 0 and c.size() > 0)
    {
        cout << b.size() << " " << c.size() << endl;
        for (auto u : b)
        {
            cout << u << " ";
        }
        cout << endl;
        for (auto u : c)
        {
            cout << u << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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