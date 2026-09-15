#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{int n;

cout<<"Enter the number of elements in array:";
cin>>n;

int arr[n];

cout<<"Enter array elements:";
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}

SelectionSort(arr, n);

cout<<"Sorted array is:";
for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}