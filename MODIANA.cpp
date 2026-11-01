#include <bits/stdc++.h>
using namespace std;

/*
1. Saber las frecuencias:
    -> Algo que cuente cuantas veces aparece un número en el arreglo
2. Comparar los valores en caso que tengan la misma frecuencia:
    -> Si hay dos "1" y dos "3", hay que colocar los "1" primero antes que los "3" por valor
3. Ordenar todo:
    -> Primero por frecuencias, después por valores:
        Ejemplo:
        1 4 3 2 2 -> 1 3 4 2 2
*/

void solve(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> freq(n+1);
    for (int i = 0; i < n; i++){
        freq[a[i]] += 1;
    }
    sort(a.begin(), a.end(), [&](int l, int r){
         if (freq[l] != freq[r]) {return freq[l] < freq[r];}
         return l < r;
         });
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<a[(n+1) / 2 - 1]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
