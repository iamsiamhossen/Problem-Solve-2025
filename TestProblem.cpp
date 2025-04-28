/**
 * Author: iamsiamhossen
 * Created: 28-04-2025 02:44:22
 **/
#include <bits/stdc++.h>
using namespace std;
// fastread
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
// Shortcut
#define endl "\n"
#define int long long
#define float double

// MOD
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF 1001001001
const int MAX = 1e6 + 5;
vector<int> divisors[10];
void precompute()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10; j += i)
        {
            divisors[j].push_back(i);
        }
    }
}

int32_t main()
{
    fastread();
    precompute();
    for (auto x : divisors)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}
