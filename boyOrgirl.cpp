#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string palabra; cin>>palabra;
    int contador = 0;
    for (int i = 0; i < size(palabra); i++){
        bool flag = false;
        for (int j = 0; j < i; j++){
            if (palabra[j] == palabra[i]){
                flag = true;
                break;
            }
        }
        if (!flag){
            contador++;
        }
    }
    if (contador % 2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}
