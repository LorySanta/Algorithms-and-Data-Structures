#include <bits/stdc++.h>
using namespace std;

int main() {
    //si possono salvare gli indirizzi di memoria di variabli
    vector<int> V = {1, 4, 5, 7, 10, 14, 23};
    int *ptr_v = &V[5]; //salva l'indirizzo di V[5]

    cout << "il valore consiste in " << V[5] << endl << "il puntatore indica " << ptr_v << " e ha il valore di " << *ptr_v << endl;
    
    // ci si può spostare avanti e indietro:
    int a = *ptr_v; ptr_v--; int b = *ptr_v; ptr_v++; ptr_v++; int c = *ptr_v;
    cout << " i valori consecutivi sono " << b << "; " << a << "; " << c << "; " << endl;

    //posso creare una variabile, creando il puntatore a cui punta così:
    int* n = new int;
    
    return 0;
}
