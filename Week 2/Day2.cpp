/*
  Author: Aryan Yadav
  Is Subsequence
  
  Complexity: O(n)
  Difficulty: Easy
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        int n = s.length();
        int m = t.length();
        for(int i=0;i<m && j<n;i++){
            if(s[j] == t[i])
                j++;
        }
        
        return (j == n);
    }
};
