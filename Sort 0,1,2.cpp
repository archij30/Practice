/*
Practice Link: https://leetcode.com/problems/sort-colors/

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Follow up:

Could you solve this problem without using the library's sort function?
Could you come up with a one-pass algorithm using only O(1) constant space?
 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
Example 3:

Input: nums = [0]
Output: [0]
Example 4:

Input: nums = [1]
Output: [1]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is 0, 1, or 2.
*/


//Approach 1 : sort using STL
//Approach 2 : count frequencies of each of 0's,1's and 2's and make an array
//Approach 3 - Dutch National Flag Algo


class Solution {
public:
    void swap(int x,int y,vector<int> &nums){
        int temp=nums[x];
        nums[x]=nums[y];
        nums[y]=temp;
    }
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(low,mid,nums);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(mid,high,nums);
                high--;
            }
        }
    }
};