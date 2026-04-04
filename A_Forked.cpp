/**
 * Author: iamsiamhossen
 * Created: 30-08-2025 19:17:38
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
int dx[4] = {1, 1, -1, -1}, dy[4] = {1, -1, 1, -1};
void solve()
{
    int a, b;
    cin >> a >> b;
    int kone, ktwo;
    cin >> kone >> ktwo;
    int qnone, qntwo;
    cin >> qnone >> qntwo;

    set<pair<int, int>> king, queen;
    for (int i = 0; i < 4; i++)
    {
        king.insert({kone + dx[i] * a, ktwo + dy[i] * b});
        king.insert({kone + dx[i] * b, ktwo + dy[i] * a});
        queen.insert({qnone + dx[i] * a, qntwo + dy[i] * b});
        queen.insert({qnone + dx[i] * b, qntwo + dy[i] * a});
    }
    int ans = 0;
    for (auto u : king)
    {
        if (queen.find(u) != queen.end())
        {
            ans++;
        }
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