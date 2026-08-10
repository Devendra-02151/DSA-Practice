#include <iostream>
using namespace std;

int main () {
    int n, sum=0;

    cout << "Enter the size of the array: ";
    cin >> n; // Read the size of the array

    int arr[n]; // Create an array of size n
    for( int i = 0;i < n; i++) {
        cout << "Enter element : ";
        cin >> arr[i]; // Read each element of the array
        sum += arr[i]; // Add each element to the sum
    }
    cout << "sum=" << sum; // Print the sum
    return 0;
}