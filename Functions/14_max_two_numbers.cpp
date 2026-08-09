#include <iostream>
using namespace std;

int maximum(int a, int b) {
    if (a > b ) 
        return a;
    else
    return b; 
}

int main () {
    int a = 35;
    int b = 48;
    cout << "Maximum number is: " << maximum(a,b) << endl;
    return 0;
}

