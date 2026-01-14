#include <iostream>
#include <vector>
using namespace std;

bool iterativeBinarySearch(const vector<int>& vec, int target) {

    int left = 0;
    int right = vec.size() - 1; 

    while (left <= right) {
        int midIndex = (left + right) / 2;

        if (vec[midIndex] == target){
            return true;
        }
        else if (target < vec[midIndex]){
            right = midIndex - 1; 
        }
        else {
            left = midIndex + 2; 
        }
    }
    return false; 
}