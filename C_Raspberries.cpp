#include <bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define int long long
#define all(X) (X).begin(), (X).end()

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int even = 0;
    bool flag = false;
    int ans1 = k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % k == 0)
        {
            flag = true;
        }
        ans1 = min(ans1, k - (a[i] % k));
        if (a[i] % 2 == 0)
            even++;
    }

    if (flag)
    {
        cout << 0 << endl;
        return;
    }
    if (k != 4)
    {
        cout << ans1 << endl;
    }
    else
    {
        int anss1 = 0;
        if (even >= 2)
        {
            anss1 = 0;
        }
        else if (even == 1)
        {
            anss1 = 1;
        }
        else
        {
            anss1 = 2;
        }
        cout << min(anss1, ans1) << endl;
    }
}

int32_t main()
{
    fastread();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}