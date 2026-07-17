#include <bits/stdc++.h>
using namespace std;

long double factorial(int a){
    if (a<=1){
        long double fin = 1;
        return fin;
    }else{
        long double recursividad = a*factorial(a-1);
        return recursividad;
    }
}

long double operar(int x, int n){

    long double resultado = 0;

    for (int i=1; i<=n; i++){

        long double numerador = powl(x, (2*i - 1));
        long double denominador = factorial(2*i - 1);
        
        if (i % 2 != 0){
            resultado += numerador / denominador;
            }
        else {
            resultado -= numerador / denominador;
            }
    }

    return resultado;

}

int main(){
    int x, n; cin>>x;
    cin>>n;
    long double total = operar(x, n);
    cout<<total;
    return 0;
}