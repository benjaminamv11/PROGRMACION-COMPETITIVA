#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, k; cin>>n>>k;
    vector<int>arr(n);
    for (int &num : arr){
        cin>>num;
    }
    int cont = 0;
    for (int i : arr){
        if (i > 0 && i >= arr[k - 1]){
            cont++;
        }else{
            break;
        }
    }
    cout<<cont;

    return 0;
}