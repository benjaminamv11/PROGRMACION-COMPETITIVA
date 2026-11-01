#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    set<int>conjunto(n);
    for (int &i : conjunto){
        cin>>i;
    }
    int* primer_menor = conjunto;
    int* segundo_menor = conjunto;
    for (int i = 1; i < n; i++){

    }
    cout<<primer_menor<<endl;

    return 0;
}
