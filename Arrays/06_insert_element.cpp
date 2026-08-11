#include <iostream>
using namespace std;

int main() {
    int arr[50], n,pos, element;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to insert: ";
    cin >> element;

    cout << "Enter position to insert: ";
    cin >> pos;

    //shift elements to the right

    for(int i=n; i>=pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = element;
    n++;

    cout << "Array after insertion: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}