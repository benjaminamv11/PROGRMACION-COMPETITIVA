#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long steps = 0;  // defined before the while
    while (true) {
        long long sum = 0;
        for (int i = 0; i < n; i++) sum += a[i];
        if (sum == 0) break;
        vector<long long> newA(n);
        for (int i = 0; i < n; i++) {
            newA[i] = a[i] ^ a[(i + 1) % n];
        }
        a = newA;
        steps++;  // incremented at the end of each full XOR pass
    }
    cout << steps << endl;
    return 0;
}