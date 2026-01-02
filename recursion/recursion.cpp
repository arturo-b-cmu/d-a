#include <iostream>
using namespace std; 


int factorial(int n){
    if (n == 1) {
        return 1;
    }
    else {
        int smallerProblem = n - 1;
        int smallerResult = factorial(smallerProblem);
        return smallerResult * 2;
    }
}

int main () {
    cout << factorial(5) << "\n";
}

//run this program with clang++ -std=c++17 -g arrays.cpp -o arrays