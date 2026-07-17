#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int problemas = 0;
    while (n--){
        int a, b, c; cin>>a>>b>>c;
        if (a+b+c >= 2){
            problemas++;
        }
    }
    cout<<problemas;
    return 0;
}