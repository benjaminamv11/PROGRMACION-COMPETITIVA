#include <bits/stdc++.h>
using namespace std;

int identicas(string a, string b){
    return 0;
}

int main(){
    string s, t; cin>>s>>t;
    int p = 0, q = 0, u = 0, v = 0;
    int S = s.size(), T =t.size();
    int n = ((S*(S+1))/2 + (T*(T+1))/2);
    while(n--){
        while(p<S){
            while(q<S){
                string cadena1;
                cadena1 = s[p:q];
                cout<<cadena1<<endl;
                q++;
            }
            p++;
        }
    }
    return 0;
}