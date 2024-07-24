#include <bits/stdc++.h>
using namespace std;


int main() {
    //definiamo il grafo;
    int N, M; cin >> N >> M;
    vector<vector<int>> adjlist(N);
    //eseguiamo la BFS
    queue<int> Q;
    vector<bool> visto(N);
    int starting; Q.push(starting);
    while (!Q.empty()) {
        int s = Q.front(); Q.pop();
        //processare
        for (int i:adjlist[s]) {
            if (visto[i]) continue;
            //si può aggiungere la distanza.
            Q.push(i);
        }
    }
    return 0;
}
