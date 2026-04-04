/**
 * Author: iamsiamhossen
 * Created: 21-08-2025 02:06:04
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
    int k;
    cin >> k;
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &u : a)
        cin >> u;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int need = k - a[i];  
        if (mp.count(need)) 
        {
            cout << mp[need] + 1 << " " << i + 1 << endl;
            return;
        }
        mp[a[i]] = i; 
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