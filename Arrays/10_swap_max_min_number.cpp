#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int max = 0, min=0;
    
    for(int i=0; i<6; i++) {
        if (arr[i] > arr[max])
            max = i;

            if (arr[i] < arr[min])  
               min = i;
        
    }
    // Swap max and min elements
    int temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;
    cout << "Array after swapping max and min elements: ";

    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}