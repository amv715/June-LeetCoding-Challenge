/*
The set [1,2,3,...,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.
*/
class Solution {
public:
    string getPermutation(int n, int k) {
    string s;
    for(int i=1; i<=n; i++) 
        s.push_back(i+'0');
    while(--k) 
        next_permutation(begin(s), s.end());
        //It is used to rearrange the elements in the range [first, last) 
        //into the next lexicographically greater permutation. 
        //A permutation is each one of the N! possible arrangements 
        //elements can take (where N is the number of elements in the range). 
        //Different permutations can be ordered according to how they compare 
        //lexicographically to each other.
       return s;
}
};
