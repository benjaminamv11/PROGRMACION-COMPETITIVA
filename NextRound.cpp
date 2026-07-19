#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, k; cin>>n>>k;
    vector<int>arr(n);

    for (int &num : arr){
        cin>>num;
    }
    int cont = 0;
    for (int i = 0; i <= k; i++){
        if (arr[i] > 0){
            cont++;
        }
    }
    cout<<cont;

    return 0;
}