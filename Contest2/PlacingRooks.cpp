#include <bits/stdc++.h>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    int maximo = a;
    for(int i=0; i<4; i++){
        if (maximo < b){
            maximo = b;
        }else if(maximo < c){
            maximo = c;
        }else if(maximo < d){
            maximo = d;
        }
    }
    return maximo;
}
int main() {
    int x, y, z, w;
    cin>>x;
    cin>>y;
    cin>>z;
    cin>>w;
    int respuesta = max_of_four(x, y, z, w);
    cout<<respuesta;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
