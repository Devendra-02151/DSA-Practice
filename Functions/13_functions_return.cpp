#include <iostream>
using namespace std;

int square (int n) { //function declaration
    return n * n; //function definition
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square = " << square(n) << endl; //function call
    return 0;
}