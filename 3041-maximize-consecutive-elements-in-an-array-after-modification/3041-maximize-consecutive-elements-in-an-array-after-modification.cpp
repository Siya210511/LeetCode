class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    unordered_map<int,int> dp;
    int ans=0;
    for (int num:nums)
    {
        dp[num+1]=dp[num]+1;
        dp[num]=dp[num-1]+1;
        ans=max({ans,dp[num],dp[num+1]});
    }
    return ans;  
    }
};
//https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/solutions/8618544/269ms-beats-5146-easy-approach-and-step-3kdp9