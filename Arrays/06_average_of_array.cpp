#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cout << "Enter the size of the array: ";
    cin >> n; // Read the size of the array

    int arr[n]; // Create an array of size n

    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i]; // Read each element of the array
        sum += arr[i]; // Add each element to the sum
    }
    double average = (double)sum / n; // Calculate the average
    cout << "Average=" << average; // Print the average
    return 0;
}