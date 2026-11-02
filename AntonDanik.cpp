#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    char matches[n] = {};
    int cont = 0;
    for (int i = 0; i < n; i++){
        cin >> matches[i];
        if (matches[i] == 'A'){
            cont++;
        }
        else if (matches[i] == 'D'){
            cont--;
        }
    }
    if (cont > 0){
        cout << "Anton" << endl;
    }
    else if (cont < 0){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
