/**
 * Author: iamsiamhossen
 * Created: 30-07-2025 23:56:44
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
    vector<int> a;
    for (int i = 1; i <= 10000; i++)
    {
        a.push_back(i * i * i);
    }
    auto ok = [&](int x)
    {
        // return binary_search(all(a), x);
        // Binary search implementation
        int l = 0, r = a.size() - 1, mid;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] < x)
            {
                l = mid + 1;
            }
            else if (a[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    };
    for (int i = 1; i <= 10000; i++)
    {
        int a = n - (i * i * i);
        if (ok(a))
        {
            YES;
            return;
        }
    }
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