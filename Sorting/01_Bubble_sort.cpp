#include<iostream>
using namespace std;

void BubbleSort(int arrr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arrr[j]>arrr[j+1])
            {
                swap(arrr[j],arrr[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    BubbleSort(arr,n);

    cout<<"Sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}