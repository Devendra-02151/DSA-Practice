#include <iostream>
using namespace std;

int main() {
    int arr1[6]= {5,4,6,7,9,2};
    int arr2[6]= {5,6,7,9,2,1};

    for(int i=0;i<6; i++){

        for(int j=0;j<5;j++){

            if(arr1[i]==arr2[j])
            cout << arr1[i] <<" ";

        }
    }
 return 0;

}