#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main () {
    int n=6;
    int arr[]= {1,2,3,4,5,6};

    int maxSum = INT_MIN;

    for(int st=0; st<n; st++) {
        int currSum=0;
        for(int end=st; end<n; end++) {
             currSum += arr[end];
             maxSum = max(currSum,maxSum);
        }
    }
    cout <<" max subarray sum= " << maxSum <<endl;

    return 0;

}