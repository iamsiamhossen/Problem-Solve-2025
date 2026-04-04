/**
 * Author: iamsiamhossen
 * Created: 29-11-2025 21:19:12
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
    int n;
    cin >> n;
    vector<int> a(n * 2);
    map<int, int> freq;
    set<int> s;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        s.insert(a[i]);
    }
    if (s.size() == 1)
    {
        if (n & 1)
        {
            cout << 2 << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
            return;
        }
    }
    else
    {
        int oddcnt = 0, evncnt = 0;
        for (auto it : freq)
        {
            if (it.second & 1)
            {
                oddcnt++;
            }
            else
            {
                evncnt++;
            }
        }
        int ans = oddcnt;
       
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