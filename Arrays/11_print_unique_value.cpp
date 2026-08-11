#include <iostream>
using namespace std;

int main() {
    int arr[8]={5,6,8,2,5,6,8,6};
    cout << "Unique elements in the array are: ";

    for( int i =0; i<8; i++) { // Loop through each element in the array

        int count=0;

        for(int j=0; j<8; j++) { // Compare each element with every other element
            if(arr[i]==arr[j]) {
                count++;
            }
        }
        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}