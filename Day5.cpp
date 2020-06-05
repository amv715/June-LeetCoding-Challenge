/*
Given an array w of positive integers, where w[i] describes the weight of index i, write a function pickIndex which randomly picks an index in proportion to its weight.

Note:

1 <= w.length <= 10000
1 <= w[i] <= 10^5
pickIndex will be called at most 10000 times.
Example 1:

Input: 
["Solution","pickIndex"]
[[[1]],[]]
Output: [null,0]
Example 2:

Input: 
["Solution","pickIndex","pickIndex","pickIndex","pickIndex","pickIndex"]
[[[1,3]],[],[],[],[],[]]
Output: [null,0,1,1,1,0]
*/
class Solution {
private:
    vector<int> sums;
public:
    Solution(vector<int>& w) {
        int sum = 0;
        for(int i=0;i<w.size();i++) {
            sum += w[i];
            sums.push_back(sum);
        }
    }
    
    int pickIndex() {
        int size = sums.size();
        int randomNumber = rand() % sums[size-1];
        int l=0, r=size;
        while(l<r) {
            int m = l+(r-l)/2;
            if(sums[m] <= randomNumber) l=m+1;
            else r=m;
        }
        return l;
    }
};
