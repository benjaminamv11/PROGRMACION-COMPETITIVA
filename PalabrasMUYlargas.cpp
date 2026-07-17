#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<string> longitud_palabras(n);
    while (n--){
        string a; cin>>a;
        if (a.size() < 9){
            longitud_palabras.push_back(a);
        }else{
            string longi = a[0] + to_string(a.size()-2) + a[a.size()-1];
            longitud_palabras.push_back(longi);            
            }
    }
    for (const auto& num : longitud_palabras){
        cout<<num<<endl;
    }    
    return 0;
}