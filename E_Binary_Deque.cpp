/**
 * Author: iamsiamhossen
 * Created: 22-05-2025 00:51:21
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    if (sum < k)
    {
        cout << -1 << endl;
    }
    else if (sum == k)
    {
        cout << 0 << endl;
    }
    else
    {
        int i = 0, j = n - 1, cnt = 0;
        while (i < j)
        {
            if (sum == k)
            {
                break;
            }
            else if ((a[i] == 1 and a[j] == 1) and (sum - k) >= 2)
            {
                cnt += 2;
                sum -= 2;
                i++;
                j--;
            }
            else if (a[i] == 1 and (sum - k) >= 1)
            {
                cnt++;
                sum -= 1;
                i++;
            }
            else if (a[j] == 1 and (sum - k) >= 1)
            {
                cnt++;
                sum -= 1;
                j--;
            }
            else
            {
                int t = i;
                int izero = 0;
                while (a[t] != 1)
                {
                    t++;
                    izero++;
                }
                int t1 = j;
                int jzero = 0;
                while (a[t1] != 1)
                {
                    t1--;
                    jzero++;
                }
                if (izero > jzero)
                {
                    cnt++;
                    j--;
                }
                else if (jzero > izero)
                {
                    cnt++;
                    i++;
                }
                else
                {
                    cnt++;
                    j--;
                }
            }
        }
        cout << cnt << endl;
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