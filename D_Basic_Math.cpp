/**
* Author: iamsiamhossen
* Created: 28-04-2025 10:48:07
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
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int array_gcd(vector<int>& arr) {
    int res = arr[0];
    for (int num : arr) res = gcd(res, num);
    return res;
}
int divisor_count(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt += (i * i == n) ? 1 : 2; 
        }
    }
    return cnt;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = array_gcd(a);
    int cnt = divisor_count(ans);
    cout << cnt << endl;
    // cout << cnt;
    
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