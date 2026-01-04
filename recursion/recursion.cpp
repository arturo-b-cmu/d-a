#include <iostream>
using namespace std; 


int factorial(int n){
    if (n == 1) {
        return 1;
    }
    else {
        int smallerProblem = n - 1;
        int smallerResult = factorial(smallerProblem);
        return smallerResult * n;
    }
}

int fib(int n) {
    if (n == 1 || n == 0) {
        return n;
    }
    else {
        return fib(n - 1) + fib (n - 2);
    }
}

int main () {
    cout << "Factorial of 5: " << factorial(5) << "\n";
    cout << "Fib of 10: "  << fib(10) << "\n";
}

//run this program with clang++ -std=c++17 -g arrays.cpp -o arrays