/**
 * Author: iamsiamhossen
 * Created: 09-05-2025 22:58:02
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
int array_gcd(vector<int> &arr)
{
    int res = arr[0];
    for (int num : arr)
        res = __gcd(res, num);
    return res;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = array_gcd(a);
    if (ans == 1)
        cout << 0 << endl;
    else if (ans != 1)
    {
        int ans1 = __gcd(ans, n);
        int ans2 = __gcd(ans, n - 1);
        if (ans1 == 1)
        {
            cout << 1 << endl;
        }
        else if (ans2 == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
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