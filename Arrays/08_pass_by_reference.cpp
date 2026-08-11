#include <iostream>
using namespace std;

void changearr (int arr[],int sz) {
    cout << "Array before modification: ";
    for(int i=0; i<sz; i++){
        arr[i] = arr[i]*2;
    }

}

int main() {
    int arr[] = {5,8,25,12,45,78,90};
    
    changearr(arr,7);

    cout << "Array after modification: ";
    for(int i=0; i<7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}