#include <bits/stdc++.h>
using namespace std;

//il fenwick tree processa queries sui gruppi (serve l'operazione inverso, ad esempio: somme, prodotti, xor..) in tempo O(logN), dopo una costruzione in tempo O(NlogN)

struct fenwicktree {
    vector<int> fentr; //è il vector che supporta la data structure 

    //per costurirlo importo il vettore sul quale va costruito. ACHTUNG: è 1-index
    fenwicktree(vector<int> V) {
        fentr.assign(V.size()+1, 0);
        for (int i = 1; i<V.size()+1; i++) { //per ogni i in V
            for (int j = i; j<fentr.size(); j += j&(-j)) { //updateo tutti i valori, inizializzati a 0, successivi a i usando un metodo analogo a quello di update
            fentr[j] += V[i-1];
            }
        }
    }

    int queries(int a) { //le queries calcolano la somma da 1 ad a (1-index)
        int sum = 0;
        for (int i = a; i>0; i -= i&(-i)) sum += fentr[i];
        return sum;
    }

    void update(int pos, int value) { //update tutti i valori successivi, dopo aver aggiunto value alla posizione pos
        for (int i = pos; i<fentr.size(); i += i&(-i)) fentr[i] += value;
    }
};
