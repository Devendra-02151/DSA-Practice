#include <iostream>
using namespace std;
 
int main () {
    int n;
    cout << "Enter number of elements in array:";
    cin >> n;

    int arr[n];

    cout << "'Enter array elements:";
    for (int i=0; i <n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are:";
    for (int i=0; i < n; i++) {
        cout << arr[i] << " ";

    }
    return 0;
}