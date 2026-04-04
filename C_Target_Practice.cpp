/**
 * Author: iamsiamhossen
 * Created: 15-11-2025 19:03:11
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
const int MOD = 998244353;
const int MAXN = 200005;
int fact[MAXN], invfact[MAXN];
int modpow(int a, int e)
{
    int res = 1;
    while (e)
    {
        if (e & 1)
            res = 1LL * res * a % MOD;
        a = 1LL * a * a % MOD;
        e >>= 1;
    }
    return res;
}

int nCr(int n, int r)
{
    if (r < 0 || r > n)
        return 0;
    return 1LL * fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
}
void precompute()
{
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
        fact[i] = 1LL * fact[i - 1] * i % MOD;
    invfact[MAXN - 1] = modpow(fact[MAXN - 1], MOD - 2);
    for (int i = MAXN - 2; i >= 0; i--)
        invfact[i] = 1LL * invfact[i + 1] * (i + 1) % MOD;
}

// int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
void solve()
{
    int n;
    string a;
    cin >> n >> a;
    int z = 0;
    for (char c : a)
        if (c == '0')
            z++;
    int o = n - z;

    int ans = 0;
    for (int x = 1; x <= n; x++)
    {
        for (int u = 0; u <= x - 2 && u <= z - 1; u++)
        {
            if (z - u - 1 < 0)
                continue;
            if (n - x < z - u - 1)
                continue;
            int ws = 1LL * nCr(x - 1, u) * nCr(n - x, z - u - 1) % MOD;
            int ych = (n - x - (z - u - 1));
            if (ych < 0)
                continue;
            ans = (ans + 1LL * ws * ych) % MOD;
        }
    }
    cout << ans << "\n";
}
int32_t main()
{
    precompute();
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