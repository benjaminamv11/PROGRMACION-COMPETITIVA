#include <bits/stdc++.h>
using namespace std;

void solve(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    char* piedras = new char[n + 1];
    for (int i = 0; i < n; i++){
        cin >> piedras[i];
    }
    int contador = 0;
    piedras[n] = '\0';
    char comparar = piedras[0];
    for (int i = 1; piedras[i] != '\0'; i++){
        if (piedras[i] != comparar){
            comparar = piedras[i];
        }
        else{
            contador++;
        }
    }
    cout << contador;
    delete [] piedras;
    piedras = nullptr;
}

int main()
{
    solve();
    return 0;
}
