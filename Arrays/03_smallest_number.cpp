#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main () {
    int nums[] = {5, 2, 9, 1, 5, 6};
    int size = 6;
    int smallest = INT_MAX; // Initialize smallest to the maximum integer value
    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}