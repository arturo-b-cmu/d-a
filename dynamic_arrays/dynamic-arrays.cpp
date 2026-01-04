#include <iostream>
using namespace std; 

//create struct
struct MyDyanamicArray {
    //member variables belong to the struct
        //default c++ structs are public, change to private to prevent modification
    
    
    //Building Blocks of a dynamic array
        // 1. a pointer to a fixed size array, used here as the basis
        // 2. current number of elements in the dynamic array
        // 3. current capacity (max cap) of the dynamic arr

    //private is used to prevent external code from directly modifying size, capacity, or fixedSizeArray
    private: 
    //the initial capacity - grow dynamically from here
    static const int MAX_ENTRIES = 1; 

    //pointer to a block of memory
    int* fixedSizeArray; 

    //the total amount of elements that can be stored in the array
    int capacity; 

    //the current number of elements in the array
    int theSize; 

    //constructors and destructors
        //constuctor
    public: 
    MyDyanamicArray() : fixedSizeArray(new int[MAX_ENTRIES]), theSize(0), capacity(MAX_ENTRIES) { } //claiming memory location of size1

    //destructor
    ~MyDyanamicArray () {
        delete[] fixedSizeArray;
    }

    //functions
    bool empty() const{
        return theSize == 0;
    }

    int size() const{
        return theSize;
    }

    int& get(int index) {
        if (index >= theSize) {}
        throw out_of_range("Index out of range");

        return fixedSizeArray[index];
    }

    void addToBack(int value) {
        growIfFull();
        fixedSizeArray[theSize++] = value;
    }

    void printElements() const{
        cout << "In this array there are: " << theSize << " elements.\n";
        cout << "Capacity is: " << capacity << " slots.\n";

        for(int i = 0; i < theSize; i=i+1) {
            cout << fixedSizeArray[i] << " \n";
        }
    }

    void removeLast() {
        if (theSize == 0) {
            throw out_of_range("Cannot remove from an empty Dynamic Array.");
        }
        --theSize;
    }

    bool findNum (int num) const{
        for (int i=0; i < theSize; i++){
            if (fixedSizeArray[i] == num) {
                return true; 
            } 
        }
        return false; 
    }



    public:
    void growIfFull(){
        if (theSize >= capacity) {
            int newCapacity = 2*capacity;
            int* newFixedSizeArr = new int[newCapacity];

            for (int i = 0; i < theSize; i=i+1){
                newFixedSizeArr[i] = fixedSizeArray[i];
            }

            capacity = newCapacity;

            delete [] fixedSizeArray;
            fixedSizeArray = newFixedSizeArr;
        }
    }

    public:

    bool removeElement (int num) {
        for (int i=0; i < theSize; i++) {
            if (fixedSizeArray[i] == num) {
                for (int j = i; j < theSize - 1; j++) {
                    fixedSizeArray[j] = fixedSizeArray[j + 1];
                }
                theSize--;
                return true;
            }
        }
        return false;
    }

    
};

//testing the dynamic array

int main () {

    //create dynamic array
    MyDyanamicArray array_Dynamic; 

    //is the dynamic array empty?
    cout << "\nReturns: " << array_Dynamic.empty() << " if the array is empty" << endl;
    //cout << array_Dynamic.size() << endl;

    //cout << array_Dynamic.get(2) << endl;

    array_Dynamic.printElements();
    cout << "\nAdding new element...\n";
    int num1 = 30;
    array_Dynamic.addToBack(num1);
    array_Dynamic.printElements();
    
    //cout << "Returns: " << array_Dynamic.empty() << " if the array is empty" << endl;

    array_Dynamic.printElements();
    cout << "\nAdding new element...\n";
    int num2 = 20;
    array_Dynamic.addToBack(num2);
    array_Dynamic.printElements();

    array_Dynamic.printElements();
    cout << "\nAdding new element...\n";
    int num3 = 10;
    array_Dynamic.addToBack(num3);
    array_Dynamic.printElements();

    array_Dynamic.printElements();
    cout << "\nAdding new element...\n";
    int num4 = 5;
    array_Dynamic.addToBack(num4);
    array_Dynamic.printElements();

    array_Dynamic.printElements();
    cout << "\nAdding new element...\n";
    int num5 = 3;
    array_Dynamic.addToBack(num5);
    array_Dynamic.printElements();


    //testing remove last function
    cout << "\nRemoving last element...\n";
    array_Dynamic.removeLast();
    array_Dynamic.printElements();

    cout << "\nFinding elment '20'..." << array_Dynamic.findNum(20) << " \n";

    cout << "\nRemoving element '5' and shifting array" << array_Dynamic.removeElement(5);

    //printing new array
    cout << "\nPrinting New array...\n";
    array_Dynamic.printElements();

}