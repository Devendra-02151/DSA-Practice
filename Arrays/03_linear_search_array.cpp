#include <iostream>
using namespace std;

int main() {
    int n, item;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> item;

    bool found = false;
    for (int i=0; i<n; i++) {
        if(arr[i] == item) {
            found = true;
            cout << "Element found at index: " << i << endl;
            break;
        }
    }

    if(!found) {
        cout << "Element not found" << endl;
    }
}

   