#include <bits/stdc++.h>
using namespace std;

//prima di costruire la lista è necessario costruire il nodo
struct node {
    string s; //può esserci una qualunque variabile, qua usiamo le stringhe
    node* next;
};

//costruiamo la lista
struct lista {
    //essa è identificata da due puntatori, al primo e all'ultimo elemento
    node* first;
    node* last;

    lista() {
        first = nullptr;
        last = nullptr;
    }

    lista(string S) {
        node* N = new node; //così crea uno spazio in memoria, a cui N punta, e lo lascia in memoria
        N->s = S;
        N->next = nullptr;
        first = N;
        last = N;
    }

    //si possono unire due liste, l'operazione a + b costruisce la lista ab ACHTUNG non è commutativo
    lista operator+(lista l) { 
        lista L; 
        L.first = first; 
        L.last = l.last;
        last->next = l.first;
        return L;
    }
};
