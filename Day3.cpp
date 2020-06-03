/*
Problem:
There are 2N people a company is planning to interview. The cost of flying the i-th person to city A is costs[i][0], and the cost of flying the i-th person to city B is costs[i][1].

Return the minimum cost to fly every person to a city such that exactly N people arrive in each city.

Input: [[10,20],[30,200],[400,50],[30,20]]
Output: 110

*/
int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int N = costs.size();
        int n = N/2;
        int minCost = 0;
        vector<int>v(N);
        for (int i=0;i <N;i++) 
        {
            ans += costs[i][0]+costs[i][1];
            v[i] = costs[i][0]-costs[i][1];
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < n; ++i)
            ans += v[i];
        for (int i = n; i < N; ++i) 
            ans -= v[i];
        return ans/2;
    }
