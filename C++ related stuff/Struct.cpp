#include <bits/stdc++.h>
using namespace std;


struct esempio {
    // è possibile definire variabili dentro lo struct:
    int variabile;
    vector<int> vettore;


    // è possibile definire i costruttori di default. QUELLO DI DEFAULT DIVENTA PRIORITARIO ANCHE SE NON SI DICE!!
    esempio() {
        variabile = 11;
        vettore = {1, 2, 3, 4};
    }
    esempio(int var, vector<int> vett) {
        variabile = var;
        vettore = vett;
    }


    //  poi si possono definire i Metodi - le funzioni legate agli struct
    void Metodo() {
        cout << "ciao" << endl;
    }


    // Infine si possono definire le operazioni:
    esempio operator+(const esempio b) {
        return {variabile + b.variabile, {}};
    }
};


int main() {
    //si definiscono come normali strutture
    vector<esempio> A(1);
    //si richiamano in questo modo
    A[0].variabile = 5;
    A[0].vettore.push_back(4);
    A[0].vettore.push_back(6);
    //presi una struct si possono richiamare degli elementi con:
    for (auto [var, vett] : A) {
        cout << "la variabile è " << var << endl;
        for (auto vettx : vett) {
            cout << " e il vettore contiene " << vettx << endl;
        }
    }


    //definiamo ora struct con i valori default e con altri scelti:
    esempio a = esempio(); //equivalente a scrivere "esempio a;"
    esempio b = esempio(69, {4, 5, 6});
    //stampiamo poi i valori:
    cout << "la variabile in a vale " << a.variabile << " e il vettore è ";    
    for (int x : a.vettore) cout << x << "; ";
    cout << endl;
    cout << "la variabile in b vale " << b.variabile << " e il vettore è ";    
    for (int x : b.vettore) cout << x << "; ";
    cout << endl;


    //usiamo ora il metodo dentro A[0]:
    A[0].Metodo();


    //definita l'operazione + si può usare:
    cout << "la somma delle variabili è " << (a+b).variabile << " e da un vettore di size: " << (a+b).vettore.size() << endl;


    return 0;
}
