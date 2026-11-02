#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, h; cin >> n >> h;
    int* persons = new int[n];
    int cont = 0;
    for (int i = 0; i < n; i++){
        cin >> *(persons + i);
        if (*(persons + i) > h){
            cont += 2;
        }
        else{
            cont++;
        }
    }
    cout << cont << endl;

    delete [] persons;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}