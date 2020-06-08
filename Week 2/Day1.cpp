/*
  Author: Aryan Yadav
  Power of Two
  
  Complexity:O(1)
  Difficulty: Very Easy
*/

// Method 1: Using inbuilt functions

class Solution {
public:
    bool isPowerOfTwo(int n) {
         if(n<0)
             return false;
         int s = __builtin_popcount(n);
         if(s == 1)
             return true;
         return false;
    }
};

// Method 2: Using log

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        return (ceil(log2(n)) == floor(log2(n)));
    }
};
