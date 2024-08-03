#include <bits/stdc++.h>
using namespace std;

//BFS is an algorithm used to explore a graph, reaching every node ordered from the nearest to  the starting node to the furthest 

int main() {

    //to implement a BFS we need to define a graph using an adjacenty list
    int N, M; cin >> N >> M;
    vector<vector<int>> adjlist(N);

    //you use a queue to track the nodes you must visit, and a vector to track the ones you have already visited
    queue<int> Q;
    vector<bool> visited(N);
    int starting; Q.push(starting); /here you choose the starting node
    while (!Q.empty()) {
        int s = Q.front(); Q.pop(); 
        //you exctract the first node and process it (if you need)
        for (int i:adjlist[s]) {
            if (visited[i]) continue;
            visited[I] = true;
            //you can also get the distance from the starting node if all the arches have the same weight
            Q.push(i); 
        }
    }
    return 0;
}
