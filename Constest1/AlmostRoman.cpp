#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        // --- PREPROCESAMIENTO ---
        // Paso 1: Reemplazar todos los ? con I (valor base)
        vector<int> qpos;
        for (int i = 0; i < n; i++)
            if (s[i] == '?') qpos.push_back(i);
        int k = qpos.size();
        string base = s;
        for (int p : qpos) base[p] = 'I';
        // Paso 2: Calcular el valor base (con todos los ? = I)
        long long base_val = 0;
        for (int i = 0; i < n; i++) {
            char c    = base[i];
            char next = (i + 1 < n) ? base[i + 1] : '\0';
            if (c == 'X')      base_val += 10;
            else if (c == 'V') base_val += 5;
            else if (c == 'I') base_val += (next == 'X' || next == 'V') ? -1 : 1;
        }
        // Paso 3: Calcular delta_v para cada posición de ?
        // delta_v[i] = cuánto sube el valor total si ponemos V en vez de I
        vector<int> dv;
        for (int p : qpos) {
            char prev = (p > 0)     ? base[p - 1] : '\0';
            char next = (p + 1 < n) ? base[p + 1] : '\0';
            int d = 4; // base: I(+1) → V(+5), diferencia = 4
            if (next == 'X' || next == 'V') d += 2; // pierde el -1 de IX o IV
            if (prev == 'I')                d -= 2; // gana patrón IV (el I antes ahora da -1)
            dv.push_back(d);
        }
        // Ordenar deltas de menor a mayor (elegimos los más baratos primero)
        sort(dv.begin(), dv.end());
        // Suma acumulada de deltas
        vector<long long> prefix(k + 1, 0);
        for (int i = 0; i < k; i++)
            prefix[i + 1] = prefix[i] + dv[i];
        // --- CONSULTAS ---
        while (q--) {
            long long cx, cv, ci;
            cin >> cx >> cv >> ci;
            // Cuántas I, V y X usamos (greedy: I > V > X porque son más baratas)
            long long i_used = min(ci, (long long)k);
            long long rem    = k - i_used;          // cuántas NO son I
            long long v_used = min(cv, rem);         // cuántas son V
            long long x_used = rem - v_used;         // el resto son X
            // Costo extra de usar V y X en vez de I:
            // - Tomamos los (v_used + x_used) deltas_v más baratos
            // - Las x_used posiciones de X cuestan 5 más que V cada una
            long long ans = base_val
                          + prefix[v_used + x_used]  // suma de los deltas más baratos
                          + 5LL * x_used;             // extra por ser X y no V
            cout << ans << "\n";
        }
    }
    return 0;
}