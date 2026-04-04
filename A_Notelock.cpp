/**
 * Author: iamsiamhossen
 * Created: 19-10-2025 20:48:20
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    k--;
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            v.push_back(i + 1);
        }
    }
    if (v.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
 
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) > k)
        {
            cnt++;
        }
    }
    if (s[0] == '1' or v.size() > 0)
        cnt++;

    cout << cnt << endl;
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