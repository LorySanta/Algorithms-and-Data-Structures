#include <bits/stdc++.h>
using namespace std;

int main() {
    //lamba functions can be used to declare functions inside the main
    //the most basic syntax is: function<return_type(variable_types)> Name_function = [](variables) -> return type {//function body}
    function<int(int, int)> function1_name = [](int a, int b) -> int {
        return a + b;
    };

    //in the [] it is possible to "capture" variables in the main. To capture everything a "&" is enough. 
    function<int(int)> function2_name = [&function2_name](int a) -> int {
        if (a == 0 || a == 1) return 1;
        return function2_name(a-1) + function2_name(a-2);
    };
    
    //it is possible to create a custom priority_queue:
    function<bool(int, int)> order = [](int a, int b) -> bool {
        return a > b;
    };
    priority_queue<int, vector<int>, decltype(order)> Q(order);

    return 0;
}
