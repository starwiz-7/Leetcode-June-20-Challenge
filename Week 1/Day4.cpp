/*
  Author: Aryan Yadav(starwiz_7)
  Reverse String
  
  Complexity: O(n/2)
  Difficulty: Easy
*/

// Method 1 : Using STL

using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
        return;
    }
};


// Method 2 : Two-Pointers Approach

using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;
        while(left<=right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        return;
    }
};
