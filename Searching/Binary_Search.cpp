#include<iostream> 
#include <vector>
using namespace std;

int recBinarySearch(vector<int> arr, int st, int end, int key)
{
    if(st<=end)
    {
        int mid= st+(end-st)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]>key)
            return recBinarySearch(arr, st, mid-1, key);
        return recBinarySearch(arr, mid+1, end, key);
    }
    return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    int key=4;
    cout<<recBinarySearch(arr, 0, arr.size()-1, key)<<endl;
    return 0;
}
