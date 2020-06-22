/*
Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==0)
        {
            return 0;
        }
        unordered_map<int,int> m;
        for(int i=1;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto itr = m.begin();itr!=m.end();itr++)
        {
            if(itr->second==1)
                return itr->first;
        }
        return nums[0];
    }
};
