#include <bits/stdc++.h>
using namespace std;


void dfs(int a, vector<vector<int>> adjlist, vector<bool> visto) {
    if (visto[a]) return;
    visto[a] = true;
    //processa
    for (int i:adjlist[a]) dfs(a, adjlist, visto);
    return;
}


int main() {
    //dfs, con ricorsione:
    int N; vector<bool> visto(N);
    vector<vector<int>> adjlist(N, vector<int> (N));
    int start;
    dfs(/*nodo di partenza*/ start, adjlist, visto);


    return 0;
}
