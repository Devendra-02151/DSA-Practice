#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n; // Read the size of the array
    vector<int> arr(n); // Create a vector of size n

    for(int i = 0; i < n; i++){
        cin >> arr[i]; // Read each element of the array
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; // Display each element of the array
    }

}