#include <bits/stdc++.h>
using namespace std;

//implemento uno struct che tiene conto di ogni nodo, elencando la lista di adiacenza con i pesi, e altre cose
struct node {
    vector<pair<int,int>> adjlist; //il pair è (direzione, peso)
    //eventuali altre variabli
};

int main() {
    //costruisco il grafo
    int N, M; cin >> N >> M;
    vector<node> G(N);
    for (int i = 0; i<M; i++) {
        int a, b, w; cin >> a >> b >> w;
        G[a].adjlist.push_back({b, w});
        G[b].adjlist.push_back({a, w});
    }
    
    //applico Dijkstra's
    vector<int> dist(N, INFINITY); //salvo le distanze
    vector<bool> visto(N); //segno i nodi da vedere
    priority_queue<pair<int, int>> Q; //per applicare l'algoritmo
    dist[0] = 0; Q.push({0, 0}); //sono segnate la distanza iniziale ed è inizializzata la queue 
    while (!Q.empty()) {
        int atm = Q.top().second; Q.pop();
        if (visto[atm]) continue;
        visto[atm] = true;
        for (auto [edge, w] : G[atm].adjlist) { //processo tutti i nodi
            if (dist[edge] > dist[atm] + w) dist[edge] = dist[atm] + w;
            Q.push({-dist[edge], edge});
        }
    }
    
    //couta la risposta
    cout << dist[N-1]; 
}
