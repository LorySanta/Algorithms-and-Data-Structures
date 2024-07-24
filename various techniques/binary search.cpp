#include <bits/stdc++.h>
using namespace std;

//stabilisco una condizione a caso
bool cond(int x) {
    return x>=16;
}

int main() {
    vector<int> V = {1, 3, 4, 5, 6, 19, 23};
    //se si ha un vettore del tipo AAAAAAAAABBBBBBBBBBBB, per trovare l'ultimo A si fa:
    int k = 0; 
    for (int i = 1 <<(int)log2(V.size()); i>0; i/=2) {
        if (k+i<V.size() && !cond(V[k+i])) k = k+i;
    }
    cout << k << endl;

    //se invece voglio trovare il primo B eseguo: !ACHTUNG! se sono tutti A al posto di N+1, Da N (col ++)
    int h = -1;
    for (int i = 1<<(int)log2(V.size()); i>0; i/=2) {
        if (h+i<V.size() && !cond(V[h+i])) h = h+i;
    }
    h++;
    cout << h << endl;
    return 0;
}
