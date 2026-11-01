#include <bits/stdc++.h>
using namespace std;

void solve(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n, w; cin >> k >> n >> w;
    for (int i = 0; i < w; i++){
        int valor = (i + 1) * k;
        n -= valor;
    }
    if (n < 0){
        cout << n * (-1);
    }
    else{
        cout << 0;
    }
}

int main(){
    solve();
    return 0;
}
