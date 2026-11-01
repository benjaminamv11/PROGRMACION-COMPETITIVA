#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll

void solve2(){
    int n; cin >> n;
    while(n--){
        int i; cin >> i;
        int cont_Div = 0;
        for(int j = 1; j <= sqrt(i); j++){
            if (i % j == 0 && i / j != j){
                cont_Div += 2;
            }
            else if(i % j == 0 && i / j == j){
                cont_Div++;
            }
        }
    cout << cont_Div << endl;
    }
}

signed main(){
    solve2();
}
