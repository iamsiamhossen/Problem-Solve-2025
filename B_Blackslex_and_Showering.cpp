/**
 * Author: iamsiamhossen
 * Created: 23-12-2025 21:07:19
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
// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(arr[i] - arr[i + 1]);
    }
    int mxx = INT_MIN;
    for (int i = 1; i < n - 1; i++)
    {
        int cost1 = abs(arr[i] - arr[i - 1]) + abs(arr[i] - arr[i + 1]);
        int cost2 = abs(arr[i - 1] - arr[i + 1]);
        mxx = max(mxx, cost1 - cost2);
    }
    int forfirst = abs(arr[0] - arr[1]);
    mxx = max(mxx, forfirst);
    int forlast = abs(arr[n - 1] - arr[n - 2]);
    mxx = max(mxx, forlast);
    cout << sum - mxx << endl;
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