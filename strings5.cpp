#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cadena; cin<<cadena;
    string sin_repe;
    for (int i = 0; cadena[i] != '\0'; i++){
        bool flag = false;
        for (int j = 1; cadena[j] != '\0';j++){
            if ((cadena[j] == cadena[j] && !flag)){
                sin_repe.push_back(cadena[i]);
                flag = true;
            }else if (cadena[j] == cadena[j] && flag){
                break;
            }
        }
    }
}
