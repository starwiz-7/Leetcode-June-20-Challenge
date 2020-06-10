/*
  Author: Aryan Yadav
  Search Insert Position
  
  Complexity:O(n)
  Difficulty: Easy
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return(lower_bound(nums.begin(),nums.end(),target)-nums.begin());
    }
};
