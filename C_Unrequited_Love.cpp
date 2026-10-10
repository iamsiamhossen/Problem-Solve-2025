/**
 * Author: iamsiamhossen
 * Created: 10-10-2026 22:33:51
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
// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    vector<int> b;
    int total = 0;
    for (int i = 0; i < n - 4; i++)
    {
        int sum = a[i] + a[i + 2] - a[i + 4];
        if (mp.find(sum) != mp.end())
        {
            total += mp[sum];
        }
        b.push_back(sum);
        mp[sum]++;
    }
    if (b.size() > 2)
    {
        for (int i = b.size() - 1; i >= 2; i--)
        {
            if (b[i] == b[i - 2])
            {
                total--;
            }
            if (i >= 4 && b[i] == b[i - 4])
            {
                total--;
            }
        }
    }
    cout << total << endl;
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