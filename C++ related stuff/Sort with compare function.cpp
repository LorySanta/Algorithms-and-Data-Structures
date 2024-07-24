#include <bits/stdc++.h>
using namespace std;

//I sort si possono implementare come si vuole, utilizzando la condizione "compare"

//normale sort decrescente
bool compare_decrescente(const int /*type*/ a, const int /*type*/ b) {
    return a > b;
}

//sorta i numeri modulo 8
bool compare_mod8(const int a, const int b) {
    if (a%8 != b%8) return a%8<b%8;
    else return a<b;
}

int main() {
    vector<int> V = {1, 5, 4, 8, 3, 9};
    //sort normale
    sort(V.begin(), V.end());
    for (auto v:V) cout << v << "; ";
    cout << endl;
    //sort con compare
    sort(V.begin(), V.end(), compare_decrescente);
    for (auto v:V) cout << v << "; ";
    cout << endl;
    //sort personalizzato
    sort(V.begin(), V.end(), compare_mod8);
    for (auto v:V) cout << v << "; ";
    cout << endl;


    return 0;
}
