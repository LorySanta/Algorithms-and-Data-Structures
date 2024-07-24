#include <bits/stdc++.h>
using namespace std;

struct prefixsum {
    vector<int> ps; //questo è il vettore prefix

    prefixsum(vector<int> V) {  //qui la definisco, uno index
        vector<int> aus(V.size()+1);
        aus[0] = 0;
        for (int i = 1; i<=V.size(); i++) aus[i] = V[i-1] + aus[i-1];
        ps = aus;
    }

    int sum(int a, int b) { //qui trovo la somma da a a b
        return ps[b+1]-ps[a];
    }
};
