/**
 * Author: iamsiamhossen
 * Created: 13-04-2025 22:50:43
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
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s.insert(a[i][j]);
        }
    }
    int tmp=2;
    int t = accumulate(s.begin(), s.end(), 0);
    int x = 2 * n;
    int ans = (x * (x + 1)) / 2;
    cout << (ans - t) << " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(tmp==(i+1+j+1)){
                cout<<a[i][j]<<" ";
                tmp++;
            }
        }
    }
    cout << endl;
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