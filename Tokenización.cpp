#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

void solve()
{
    /*PROBLEMA PRINCIPAL
        LA COMPLEJIDAD DEL PROBLEMA...
        NO PODEMOS LEER STRING POR STRING, ENTONCES DIVIDIMOS CADA STRING DESDE EL INICIO
        PRIORIDAD: EL MAPA DEBE RESPONDER SI EL STRING CONTIENE AL DÍGRAFO
    */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin>>n>>q;
    string s;
    map<string, int>respuestas;
    set<string> st;
    for (int i = 0; i < n; i++){
        cin>>s;
        st.clear(); // limpiar el set
        for (int j = 0; j+1 < s.size(); j++){ //RECORRER EL STRING
            st.insert(s.substr(j, 2)); //CREAR EL DIGRAFO Y AGREGARLO AL SET
        }
        for (string dig : st){
            respuestas[dig] += 1; //AUMENTAR LAS VECES QUE APARECEN CADA DIGRAFO
        }
    }
    string dig;
    for (int i = 0; i < q; i++){
        cin >> dig;
        cout<<respuestas[dig]<<endl;
    }
}

signed main()
{
    solve();

    return 0;
}
