/**
 * Author: iamsiamhossen
 * Created: 27-04-2025 12:45:27
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
    int ans = (n * (n + 1)) / 2;
    if (ans % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        vector<int> a, b;
        int sum = ans / 2;
        // cout<<sum<<endl;
        for (int i = n; i >= 1; i--)
        {
            if (sum >= i)
            {
                a.push_back(i);
                // cout << i << " ";
                sum -= i;
            }
            else
            {
                b.push_back(i);
            }
        }
        if (a.size() > b.size())
        {
            cout << "YES" << endl;
            cout << a.size() << endl;
            for (auto x : a)
            {
                cout << x << " ";
            }
            cout << endl;
            cout << b.size() << endl;
            for (auto x : b)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << b.size() << endl;
            for (auto x : b)
            {
                cout << x << " ";
            }
            cout << endl;
            cout << a.size() << endl;
            for (auto x : a)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
int32_t main()
{
    fastread();
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}