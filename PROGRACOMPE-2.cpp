#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> almacen;
    int n; cin>>n;
    while (n--){
        string accion, producto; cin>>accion>>producto;
        int k;
        if (accion == "add"){
            cin>>k;
            almacen[producto] += k;
        }else if (accion == "rem"){
            cin>>k;
            if (almacen[producto] - k > 0){
                almacen[producto] -= k;
            }else{
                almacen[producto] = 0;
            }
        }else if (accion == "count"){
            cout<<almacen[producto]<<endl;
        }
    }
    return 0;
}
