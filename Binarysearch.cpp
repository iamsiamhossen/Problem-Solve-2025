/**
 * Author: iamsiamhossen
 * Created: 17-07-2025 09:29:03
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a = 0, b = n - 1, target = 5;
    while (a <= b)
    {
        int half = (a + b) / 2;
        if (v[half] == target)
        {
            YES;
            break;
        }
        if (v[half] > target)
            b = half - 1;
        else
            a = half + 1;
    }

    auto idx = lower_bound(v.begin(), v.end(), target) - v.begin();
    cout << v[idx] << endl;
    if (idx < n and v[idx] == target)
        YES;
    else
        NO;
    
    //Count korar jonno 
    auto it = equal_range(v.begin(), v.end(), target);
    cout << it.second-it.first << "\n";
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