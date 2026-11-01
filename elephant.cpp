#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x; cin>>x;
    int pasos[5] = {5, 4, 3, 2, 1};
    int cant_pasos = 0;
    int* ptr = pasos;
    int iter = 0;
    while (x != 0){
        if (x < *(pasos + iter)){
            iter++;
        }else{
            x -= *(pasos + iter);
            cant_pasos++;
        }
    }
    cout<<cant_pasos;

    return 0;
}
