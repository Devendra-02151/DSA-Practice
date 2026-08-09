#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}
int main () {
    int a = 5;
    int b = 10;
    cout << sum(a,b) << endl;
    return 0;
}