/**
 * Author: iamsiamhossen
 * Created: 25-05-2025 20:35:47
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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // vector<pair<int, int>> t;
    map<int, vector<int>> t;
    for (int i = 0; i < n; i++)
    {
        t[a[i]].push_back(i + 1);
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (t.count(l) and t.count(r))
        {
            int x = t[l][0];
            int y = t[r].back();
            if(x>y) NO;
            else YES;
            
        }
        else{
            NO;
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