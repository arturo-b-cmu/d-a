#include <iostream>
using namespace std; 

int main () {

    //declare the static array
    int numbers[5] = {1, 2, 3, 4, 5};
    //declare and create an empty array
    int numbers_empty[5] = {};

    //declare size variable, no built in operator
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "sizeof() array in bytes: " << sizeof(numbers) << endl; //sizeof() is number of bytes
    cout << "sizeof() array of index[0] in bytes: " << sizeof(numbers[0]) << endl; //4 bytes for every slot in the array

    //printing an outof bounds 
    cout << "Out of bounds array numbers[99]: " << numbers[99] << endl;

    //output the first element
    cout << "Array 1st element: ";
    cout << numbers[0] << endl;

    //finding the SIZE of the array
    cout << "Size of array: ";
    cout << size << endl;

    //iterating through array before 1st element
    for (int i=0; i < 5; i=i+1) {
        cout << "Array Element Before update: ";
        cout << numbers[i] << "\n";
    }

    //update element in array, assign 10 to 4th element
    numbers[3] = 10;
    cout << "Updated Element [3]: ";
    cout << numbers[3] << endl;

    //Method 1: iterating through an array
    for (int i =0; i < 5; i=i+1) {
        cout << "Method 1 Iteration: ";
        cout << numbers[i] << "\n";

    }

    //Method 2: using range-based for loop (only after C++ 11)
    for (int val : numbers ) {
        cout << "Method 2 Range Based: ";
        cout << val << "\n";
    }

    //Method 3: Using pointers
    for (int* ptr = numbers; ptr < numbers + 5; ptr=ptr+1) {
        cout << "Method 3 Using Pointers: ";
        cout << *ptr << "\n";
    }
    return 0;

}

//run this program with clang++ -std=c++17 -g arrays.cpp -o arrays