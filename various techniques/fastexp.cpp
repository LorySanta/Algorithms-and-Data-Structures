#include <bits/stdc++.h>
using namespace std;

//Si possono fare le potenze a^n in O(logn), quando solitamente sono in O(N). Si definisce la funzione
long long fastpow(long long a, int b) {
    if (b == 0) return 1;
    long long x = fastpow(a, b/2);
    x = x*x;
    if (b%2 == 1) x = x*a;
    return x;
}
