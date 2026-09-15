#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>nums,int target) {
    vector<int>ans;
    int n=nums.size();

    int i=0, j=n-1;

    while(i<j){
       int pairSum= nums[i]+nums[j];
       if(pairSum>target){
        j--;
       } else if(pairSum<target){
            i++ ;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
       }
       return ans;
    }

    int main () {
        vector<int>nums= {3,4,6,7,8,9};
        int target= 12;

        vector<int>ans= pairSum(nums,target);
        cout<<ans[0]<< ","<< ans[1]<< endl;

        return 0;
    }