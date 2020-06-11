/*
  Author: Aryan Yadav
  Sort Colors
  
  Complexity:O(n)
  Difficulty:Easy
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0,c1 = 0,c2 = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            switch(nums[i]){
                    case 0: c0++;
                        break;
                    case 1: c1++;
                        break;
                    case 2: c2++;
                        break;
            }
        }
        int i = 0;
        while(c0>0){
            nums[i++] =0;
            c0--;
        }
        while(c1>0){
            nums[i++] = 1;
            c1--;
        }
        while(c2>0){
            nums[i++] = 2;
            c2--;
        }
    }
};
