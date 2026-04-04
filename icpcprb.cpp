#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 200000;

long long fact[MAXN+1];
long long inv[MAXN+1];

long long pow_mod(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = fact[i-1] * i % MOD;
    }
    inv[MAXN] = pow_mod(fact[MAXN], MOD-2, MOD);
    for (int i = MAXN-1; i >= 0; i--) {
        inv[i] = inv[i+1] * (i+1) % MOD;
    }
}

int main() {
    precompute();
    long long inv2 = pow_mod(2, MOD-2, MOD);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int n0 = count(s.begin(), s.end(), '0');
        int n1 = n - n0;

        if (n0 == 0 || n1 == 0) {
            cout << 0 << endl;
            continue;
        }

        long long tm1 = fact[n] * inv2 % MOD;
        tm1 = tm1 * inv[n0-1] % MOD;
        tm1 = tm1 * inv[n1-1] % MOD;

        long long tm2 = 0;
        for (int k = 1; k <= n0; k++) {
            tm2 = (tm2 + fact[n - k] * inv[n0 - k] % MOD) % MOD;
        }
        tm2 = tm2 * n1 % MOD;
        tm2 = tm2 * inv[n1] % MOD;

        long long ans = (tm1 - tm2) % MOD;
        if (ans < 0) ans += MOD;
        cout << ans << endl;
    }
    return 0;
}