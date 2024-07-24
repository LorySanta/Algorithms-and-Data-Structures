#include <bits/stdc++.h>
using namespace std;


struct segmenttree {
    vector<int> segtr;

    //lo costruisco (operazione sum)
    segmenttree(vector<int> &V) {
        int L = V.size(); //lo rendo lungo una potenza di 2;
        int N = 1 << ((int)log2(L) + 1);
        while (V.size()<N) V.push_back(0); //aggiungo il neutro del gruppo
        vector<int> aus(2*N);
        for (int i = N; i<2*N; i++) aus[i] = V[i-N]; //i valori dei nodi più bassi
        for (int i = N-1; i>0; i--) aus[i] = aus[2*i] + aus[2*i+1];
        segtr = aus;
    }

    //faccio le queries
    int query(int a, int b) {
        int N = segtr.size()/2;
        a = a+N; b = b+N; //sistemo gli indici.
        int sum = 0;
        while (!(a>b)) {
            if (a%2 == 1) {
                sum += segtr[a];
                a = a+1; //lo sposto per salire
            }
            if (b%2 == 0) {
                sum += segtr[b];
                b = (b-1); //lo sposto per salire
            }
            a/=2; b/=2; // salgo
        }
        return sum;
    }

    //query di update
    void update(int i, int u) {
        int N = segtr.size()/2;
        i = i+N;
        segtr[i] = u;
        for (int j=i/2; j>0; j/=2) segtr[j] = segtr[2*j] + segtr[2*j+1];
        return;
    }
};
