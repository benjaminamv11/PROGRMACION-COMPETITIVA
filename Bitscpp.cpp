#include <bits/stdc++.h>
using namespace std;

int main(){
    int valor = 0;
    int n; cin>>n;
    for (int i = 0; i < n; i++){
        string a; cin>>a;
        if (a == "++X" || a == "X++"){
            valor++;
        }
        else if (a == "--X" || a == "X--"){
            valor--;
        }
    }
    cout<<valor;
    
    return 0;
}