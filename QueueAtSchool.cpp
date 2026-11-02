#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, t; cin >> n >> t;
    map<int, char> classroom;
    for(int i = 0; i < n; i++){
        cin >> classroom[i];
    }
    while(t--){
        for(int i = n - 1; i > -1; i--){
            if (classroom[i - 1] == 'B' && classroom[i] == 'G'){
                char aux = classroom[i];
                classroom[i] = classroom[i - 1];
                classroom[i - 1] = aux;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << classroom[i];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}