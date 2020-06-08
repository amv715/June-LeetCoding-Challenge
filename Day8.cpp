/*

Given an integer, write a function to determine if it is a power of two.

Example 1:

Input: 1
Output: true 
Explanation: 20 = 1

*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) //if n is negative or 0 it can not be a power of 2
            return false;
        
        while (n % 2 == 0) //keep dividing n by 2 if n is even 
        {
            n = n/2;
        }
        //if n now is not 1 then n can not be a power of 2
        if(n == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
