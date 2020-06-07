/*
  Author: Aryan Yadav
  Coin Change 2
  
  Algorithm: DP
  Difficulty: Easy
*/

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int m = coins.size();
        if(m == 0 && amount == 0)
            return 1;
        if(m == 0)
            return 0;
        int table [amount+1][m];
        for(int i=0;i<m;i++){
            table[0][i] = 1;
        }
        
        for(int i=1;i<amount+1;i++){
            for(int j = 0;j<m;j++){
                int x = (i-coins[j] >= 0) ? table[i - coins[j]][j] : 0;
                int y = (j >= 1) ? table[i][j - 1] : 0;
                table[i][j] = x+y;
            }
        }
        return table[amount][m-1];
    }
};
