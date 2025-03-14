/**
 * Author: iamsiamhossen
 * Created: 25-01-2025 20:05:50
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<int> b(k);
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }

    if (n == k)
    {
        for (int i = 0; i < m; i++)
        {
            cout << 1;
        }
        cout << endl;
    }
    else if (k == n - 1)
    {
        int sum=m*(m+1)/2;
        int sum2= accumulate(all(b),0);
        int ind=abs(sum-sum2);
        // cout<<ind<<endl;
        vector<int> ans(m,0);
        ans[ind-1]=1;
        for(auto u:ans)
        {
            cout<<u;
        }
        cout<<endl;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            cout << 0;
        }
        cout << endl;
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