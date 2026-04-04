/**
 * Author: iamsiamhossen
 * Created: 05-12-2025 16:40:17
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
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    if (n % 12 == 0)
    {
        cout << s << endl;
        return;
    }
    else if (n < 12)
    {
        int idx = find(all(months), s) - months.begin();
        idx = (idx + n) % 12;
        cout << months[idx] << endl;
    }
    else
    {
        int idx = find(all(months), s) - months.begin();
        n = n % 12;
        idx = (idx + n) % 12;
        cout << months[idx] << endl;

       
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