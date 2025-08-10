/**
 * Author: iamsiamhossen
 * Created: 26-06-2025 22:05:39
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
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    vector<int> ans = v;
    sort(all(ans));
    int idx1 = find(v.begin(), v.end(), ans[0]) - v.begin();
    int idx2 = find(v.begin(), v.end(), ans[1]) - v.begin();
    // cout<<idx1 << " " << idx2 << endl;
    if(abs(idx1 - idx2) == 1 and !(idx1==1 and idx2==2 or idx1==2 and idx2==1))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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