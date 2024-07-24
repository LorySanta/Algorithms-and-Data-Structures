#include <bits/stdc++.h>
using namespace std;


int main() {
    //indichiamo prima il numero di nodi e di archi
    int N; cin >> N;
    int M; cin >> M;


    //si possono rappresentare in 3 modi, 1° è la lista di adiacenza
    vector<vector<pair<int,int>>> adj(N);
    for (int i = 0; i<M; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        //si può aggiungere il viceversa se è orientato
    }


    //in alternativa c'è la matrice di adiacenza:
    vector<vector<int>> matr(N, vector<int> (N));
    for (int i = 0; i<M; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        matr[a][b] = w;
        //si può aggiungere il viceversa se è orientato
    }


    //infine c'è la lista di archi
    vector<tuple<int,int,int>> arch;
    for (int i = 0; i<M; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        arch.push_back({a, b, w});
        //si può rendere anche orientato.
    }


    return 0;
}
