#include <bits/stdc++.h>
using namespace std;

int main() {
    //per questa tecnica è utile avere come struttura la matrice di adiacenza
    int N, M; 
    vector<vector<int>> G(N, vector<int> (N, INFINITY));
    for (int i = 0; i<M; i++) {
        int a, b, w; cin >> a >> b >> w;
        G[a][b] = w;
        G[b][a] = w;
    }

    //scelgo un nodo "perno" e aggiorno le distanze forzando il passaggio per lui 
    //aggiorno la adj matrix con le distanze
    for (int i = 0; i<N; i++) {
        for (int k = 0; k<N; k++) {
            for (int j = 0; j<N; j++) {
                G[k][j] = min(G[k][j], G[k][i] + G[i][j]);
            }
        }
    }

    //outputiamo l'esempio
    cout << G[0][N-1] << endl;
    return 0;
}
