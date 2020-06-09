/*
Given a string s and a string t, check if s is subsequence of t.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).

*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen = s.length();
        int tlen  = t.length();
        if(slen==0) //an empty string is always a subsequence
        {
            return true;
        }
        if(tlen==0)
        {
            return false;
        }

        int i=0; //i is pointing to string s
        int j=0; //j is pointing to string t
        
        while(i<slen) 
        {
            if(j==tlen) //if j has reached the end of string t, s is not a subsequence of t
            {
                return false;
            }
            if(s[i]==t[j]) //increment both the pointers to the next index
            {
                i++;
                j++;
            }
            else
            {
                j++; //only increment j to the next index of t
            }
        }
        return true;
    }
};
