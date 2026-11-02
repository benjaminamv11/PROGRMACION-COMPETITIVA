#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    bool* opiniones = new bool[n];
    bool flag = true;
    for (int i = 0; i < n; i++){
        cin >> *(opiniones + i);
        if ((*(opiniones + i))){
            flag = false;
            cout << "HARD" << endl;
            break;
        }
    }
    if (flag){
        cout << "EASY" << endl;
    }
    delete [] opiniones;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}