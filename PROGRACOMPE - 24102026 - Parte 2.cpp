#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

/**
    Busqueda binaria sobre funciones:
    * Funcion tiene que estar "ordenada": Siempre crezca o siempre decrezca, no ambos.
        * Funcion monótona.
    * Problema principal... Encontrar la función
    * En el problema actual, encontrar el k-esimo numero no divisible entre n
    * Solución:
        * bool f(int x)
        * Pensar que f(x) ~ f[x];
*/

bool f(int x, int n, int k){
    return x - x/n < k;
}

int n, k;
int last_true(int lo, int hi) {
	// if none of the values in the range work, return lo - 1
	lo--;
	while (lo < hi) {
		// find the middle of the current range (rounding up)
		int mid = lo + (hi - lo + 1) / 2;
		if (f(mid, n, k)) {
			// if mid works, then all numbers smaller than mid also work
			lo = mid;
		} else {
			// if mid does not work, greater values would not work either
			hi = mid - 1;
		}
	}
	return lo;
}

void solve(){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        cout << last_true(1, 2e9) + 1 << endl;
    }
}

signed main(){
    solve();
    return 0;
}
