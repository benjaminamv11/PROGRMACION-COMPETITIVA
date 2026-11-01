#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n + 1);
    while(k--){
        int l, r, x;
        cin >> l >> r >> x;
        --l;
        a[l] += x;
        a[r] -= x;
    }
    partial_sum(a.begin(), a.end(), a.begin());
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
