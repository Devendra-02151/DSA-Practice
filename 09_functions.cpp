#include <iostream>
using namespace std;

// Function to add two numbers
int add ( int a , int b) {
    return a + b;
}

int main () {

    int result = add ( 5 , 10);
    cout << "The sum of 5 and 10 is: " << result << endl;
    return 0;
}
