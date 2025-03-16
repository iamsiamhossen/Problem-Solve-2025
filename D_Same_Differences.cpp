/**
 * Author: iamsiamhossen
 * Created: 16-03-2025 23:18:43
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
    vector<int> arr(n+1);
    map<int, int> mp;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] - i;
        ans += mp[arr[i]];
        mp[arr[i]]++;
        // cout << ans << " ";
        
    }
    for(auto [x, y]: mp){
        cout << x << " " << y << endl;
    }
    cout << ans << endl;
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