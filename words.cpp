#include <bits/stdc++.h>
using namespace std;

void solve(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string palabra; cin >> palabra;
    int contador_mayusculas = 0;
    float n = palabra.size();
    for (int i = 0; i < n; i++){
        if (palabra[i] < 91 && palabra[i] > 64){
            contador_mayusculas++;
        }
    }
    for (int i = 0; i < n; i++){
        if (contador_mayusculas <= n / 2){
            if (palabra[i] < 91 && palabra[i] > 64){
                palabra[i] = palabra[i] + 32;
            }
            cout << palabra[i];
        }
        else{
            if (palabra[i] < 123 && palabra[i] > 96){
                palabra[i] = palabra[i] - 32;
            }
            cout << palabra[i];
        }
    }
}

int main(){
    solve();
    return 0;
}
