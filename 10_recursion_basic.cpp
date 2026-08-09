#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n <= 0) {
        return; // Base case: stop recursion when n is less than or equal to 0
    }
    cout << n << " "; // Print the current number
    printNumbers(n - 1); // Recursive call with n decremented by 1
}

int main () {
    printNumbers(5); // Call the recursive function with an initial value of 5
    return 0;
}