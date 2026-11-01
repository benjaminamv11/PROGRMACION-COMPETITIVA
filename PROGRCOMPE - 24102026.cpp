#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

/** Búsqueda binaria:
    * Requisito: que esté ordenado el arreglo: [-1 3 3 5 7 7 7 101]
    * Establecemos el elemento del medio
    * Complejidad: log2(n)

    * lower_bound y upper_bound: Toman un iterador (a.begin(), a.end(), x)
        * L_B: Devuelve el primer iterador tal que sea mayor o igual a x
        * U_B: Duvuelve el primer iterador tal que sea mayor que x
    * EJEMPLO: {-4 -4 -1 3 3 5 6 7 7 7 101}
        * L_B(7) = 7;
        * U_P(7) = 101;
    * "binary_search" Función en base a L_B y U_B.
    * Recuerda: arr.begin() = -4;
                arr.end()-1 = 101;
*/

void solve(){
    int n; cin >> n;
    vector<int>precios(n);
    for(int &i : precios){
        cin >> i;
    }
    sort(precios.begin(), precios.end());
    int q; cin >> q;
    for (int i = 0; i < q; i++){
        int monedas; cin >> monedas;
        cout << upper_bound(precios.begin(), precios.end(), monedas) - precios.begin() << endl;
    }
}

signed main()
{
    solve();
    return 0;
}
