#include <bits/stdc++.h>
using namespace std;

int main() {
    //In C++ you can use pointers and iterators: they are variables containing the address of another variable. Iterators refer to addresses in specific data structures (functions such as .begin() return iterators) 
    
    //To access the address of a variable you write: &name_variable
    //To create a pointer to a variable o a type T: T* name_pointer
    int a = 42;
    int* ptr_a = &a;
    //you can create a variable of type T using the "new" function, creating the pointer to it: T* ptr_variable = new T;
    int* ptr_b = new int;
    
    //you can move pointers/iterators in data structures (in sets, vectors, arrays, maps (not lists ecc...) using ++ and -- functions: ptr_V++; it_V--;
    vector<int> V = {1, 4, 5, 7, 10, 14, 23};
    int* ptr_V = &V[0]; //ptr_V points to V[3]
    auto it_V = V.begin();
    ptr_V++; //move the pointer to V[1]
    it_V++; //move the iterator to V[1]
    return 0;
}