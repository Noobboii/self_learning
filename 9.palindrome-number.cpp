/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        int rimindr;
        long y=0;

        if(x<9 && x>-1)
        {
            return true;
        }
        if(x<0)
        {
            return false;
        }
        int ori=x;

        while (x!=0)
        {
            rimindr=x%10;
            x=x/10;
            y=y*10+rimindr;
        }

        if(y==ori)
        {
            return true;
        }     
        else
            return false;          
    }
};
// @lc code=end

