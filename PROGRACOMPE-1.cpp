#include <bits/stdc++.h>
using namespace std;

void solve(string texto){
    string final;
    for (int i = 0; i < size(texto); i++){
        if (texto[i + 1] != texto[i]){
            final.push_back(texto[i]);
        }else{
            continue;
        }
    }
    cout<<final;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string palabra; cin>>palabra;
    solve(palabra);
    return 0;
}
