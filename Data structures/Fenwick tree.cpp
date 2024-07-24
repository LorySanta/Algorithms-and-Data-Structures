#include <bits/stdc++.h>
using namespace std;

//il fenwuick tree processa queries sui gruppi in tempo O(logn), dopo una costruzione in tempo O[NlogN]
struct fenwicktree {
    vector<int> fentr;

    //per costurirlo importo il vettore sul quale va eseguito
    fenwicktree(vector<int> V) {
        fentr.assign(V.size()+1, 0);
        for (int i = 1; i<V.size()+1; i++) { //per ogni i in V
            for (int j = i; j<fentr.size(); j += j&(-j)) { //updateo tutti i valori, inizialmente 0, successivi a i usando un modo analogo a update
            fentr[j] += V[i-1];
            }
        }
    }

    int queries(int a) { //le queries calcolano la somma da 1 a a (1-index)
        int sum = 0;
        for (int i = a; i>0; i -= i&(-i)) sum += fentr[i];
        return sum;
    }

    void update(int pos, int value) { //update tutti i valori successivi
        for (int i = pos; i<fentr.size(); i += i&(-i)) fentr[i] += value;
    }
};
