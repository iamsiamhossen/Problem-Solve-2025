#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    vector<vector<int>> result;
    
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subseq;
        
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subseq.push_back(arr[i]);
            }
        }
        
        // Only store if size >= 2
        if (subseq.size() >= 2) {
            result.push_back(subseq);
        }
    }
    
    cout << "Total: " << result.size() << "\n\n";
    
    for (auto& subseq : result) {
        for (int x : subseq) {
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}