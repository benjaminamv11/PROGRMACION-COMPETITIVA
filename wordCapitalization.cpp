#include <bits/stdc++.h>
using namespace std;

int main()
{
    string palabra; cin>>palabra;

    if (palabra[0] > 96 && palabra[0] < 123){
        char cambio = palabra[0];
        cambio -= 32;
        cout<<cambio;
        for (int i = 1; i < size(palabra); i++){
            cout<<palabra[i];
        }
    }else{
        cout<<palabra;
    }

    return 0;
}
