#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

void solve()
{
    int n, q; cin >> n >> q;
    vector<int>arr(n);
    for (int &i : arr){
        cin>>i;
    }
    vector<int>sumas(n + 1);
    for (int i = 0; i < n; i++){
        sumas[i + 1] = sumas[i] + arr[i];
    }
    while(q--){
        int l, r; cin >> l >> r;
        --l;
        cout << sumas[r] - sumas[l] << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
