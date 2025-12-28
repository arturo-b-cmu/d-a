#include <iostream>
#include <array>
using namespace std;

int main() {
    //use the library to declare array
    array <int, 5> arr = {1, 2, 3, 4, 5};

    //create an empty array
    array <int, 5> arr_empty = {};

    //access 1st element using at() with bounds checking
    cout << "First element: ";
    cout << arr.at(0) << endl;

    //print elements before element update
    for (int i = 0; i < arr.size(); i=i+1){
        cout << "Array before update: ";
        cout << arr[i] << "\n";
    }

    //modify an element with bounds checking will throw execption if out of bounds
    cout << "Modified element [2]: ";
    cout << (arr.at(2) = 10) << endl;

    //Method 1 Iteration through Array
    for (size_t i=0; i < arr.size(); i=i+1) {
        cout << "Method 1: ";
        cout << arr[i] << "\n";
    }

    for (int val : arr) {
        cout << "Method 2: ";
        cout << val << "\n";
    }

    //Method 3: using pointers
    for (int* ptr = arr.data(); ptr < arr.data() + arr.size(); ptr=ptr+1){
        cout << "Method 3: ";
        cout << *ptr << "\n";
    }

    //printing pointer data
    cout << arr.data() << endl;
    cout << arr.size() << endl;

    //

    return 0; 
}

//clang++ -std=c++17 -g arrays-2.cpp -o arrays-2