#include <iostream>
using namespace std;

int linearsearch(int arr[], int sz,int key) {
    for(int i=0; i<sz;i++)
    if(arr[i]==key) {
        return i;
    }
    return -1;
}

int main() {
    int arr[]= {5,6,8,24,12,45,78,90};
    int sz= 8;
    int key=80;

    cout << "Element found at index: " << linearsearch(arr,sz,key);
    return 0;
}
