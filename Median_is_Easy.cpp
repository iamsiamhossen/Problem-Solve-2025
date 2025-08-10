#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        vector<int> B(n);
        for (int i = 0; i < n; ++i) {
            B[i] = A[i] % 10;
        }

        vector<int> count(10, 0);
        vector<int> res;
        for (int i = 0; i < n; ++i) {
            int digit = B[i];
            count[digit]++;
            int total_elements = i + 1;
            int k;
            if (total_elements % 2 == 1) {
                k = (total_elements + 1) / 2;
            } else {
                k = total_elements / 2;
            }

            int median = 0;
            int cnt = 0;
            for (int d = 0; d < 10; ++d) {
                cnt += count[d];
                if (cnt >= k) {
                    median = d;
                    break;
                }
            }
            res.push_back(median);
        }

        for (int i = 0; i < n; ++i) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}