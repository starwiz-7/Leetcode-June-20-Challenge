/*
  Author: Aryan Yadav
  Largest Divisible Subset
  
  Difficulty: Easy
*/

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> dp(nums.size(), 0);
        vector<int> son(nums.size(), 0);

        int largest = 0;
        int last = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j >= 0; j--){
                if(nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]){
                    dp[i] = dp[j] + 1;
                    son[i] = j;
                }
                if(dp[i] > largest){
                    largest = dp[i];
                    last = i;
                }
            }
        }
        vector<int> res;
        for(int i = 0; i < largest; i++){
            res.insert(res.begin(), nums[last]);
            last = son[last];
        }
        return res;
    }
};
