
/*
Problem: 1. Two Sum
Platform: LeetCode
Difficulty: Easy
Topic: Array, Two Pointers

Approach:
Use two pointers, one at the beginning and one at the end of the sorted array.
If their sum is smaller than the target, move the left pointer forward.
If their sum is greater than the target, move the right pointer backward.
Return the two indices when their sum equals the target.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int i = 0, j = n-1;
    while(i < j) {
        if(nums[i] + nums[j] == target) {
            return {i, j};
        } else if(nums[i] + nums[j] < target) {
            i++;
        } else {
            j--;
        }
    }
    return {};
}


int main(){
    vector<int> arr={2,7,11,15,18};
    int n=arr.size();
    int target=22;
    vector<int> result = twoSum(arr, target);

    cout<<"this is brute force approach"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<j<<endl; 
            }
        }
    }
    cout<<"this is two pointer approach"<<endl;
    if (result.size() == 2) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
