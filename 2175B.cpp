#include <bits/stdc++.h>
using namespace std;

static const int SHIFT1 = 1 << 20;
static const int SHIFT2 = 1 << 21;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<long long> P(n + 1, 0);

        // Region 1: i < l
        for (int i = 1; i < l; i++) {
            P[i] = i;
        }

        // Region 2: l <= i < r
        for (int i = l; i < r; i++) {
            P[i] = SHIFT1 + i;
        }

        // Forced equality: P[r] = P[l - 1]
        P[r] = P[l - 1];

        // Region 3: i > r
        for (int i = r + 1; i <= n; i++) {
            P[i] = SHIFT2 + i;
        }

        // Compute array a
        vector<long long> a(n);
        for (int i = 1; i <= n; i++) {
            a[i - 1] = P[i] ^ P[i - 1];
        }

        // Output
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 < n ? ' ' : '\n');
        }
    }

    return 0;
}
