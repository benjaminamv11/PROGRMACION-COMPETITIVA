#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n, m, k; cin>>n>>m>>k;
        vector<string>collares(m);
        for (int i = 0; i < n; i++) {
            string n_coll; cin>>n_coll;
            collares.push_back(n_coll);
        }
        vector<int> cadenas;
        int d = 0;
        int x = 0;
        while(m--){
            int cont = 0;
            for (int i = 0; i < n; i++){
                char a1 = collares[x][i], a2 = collares[x + 1][i];
                if (a1 == a2){
                    cont++;
                }else{
                    reverse(collares[m].begin(), collares[m].end());
                    d++;
                    cadenas.push_back(m);
                    break;
                }if (cont == k){
                    break;
                }
            }
        }
        cout<<d<<endl;
        for (int &num : cadenas){
            cout<<cadenas[num];
        }
    }
    return 0;
}

/*
Realizar un grafo:
- Voltear de ser necesario para que en todas las n cadenas puedan tener k gemas iguales en la misma posición
- Reverssar el primero si los dos primeros caracteres comparados son diferentes entre sí
- Una vez volteado el primero, usamos el segundo como referencia y comparamos las cadenas delante de este.
- Continuamos así hasta poder obtener las cadenas reordenadas y contar las que fueron volteadas, con su posición en el vector
- Si después de todo, no se puede cumplir la cantidad mínima de gemas iguales en posiciones i para obtener cadenas similares
imprime directamente -1.
*/