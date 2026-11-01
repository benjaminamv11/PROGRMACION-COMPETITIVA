#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

void solve()
{
    int n; cin >> n;
    vector<int>arr(n);
    for (int &i : arr){
        cin>>i;
    }
    vector<int>sumas(n + 1);
    for (int i = 0; i < n; i++){
        sumas[i + 1] = sumas[i] + arr[i];
    }
    int mn = 0, sum = 0, ans = -1e18;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        ans = max(ans, sumas[i + 1]-mn);
        mn = min(mn, sum);
    }
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
