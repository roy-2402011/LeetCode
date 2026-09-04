class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int currSum=0;
        int maxSum = INT_MIN;
        for(auto val:nums)
        {
            currSum+=val;
            maxSum = max(currSum,maxSum);
            if(currSum<0)
            {
                currSum = 0;
            }
        }
        return maxSum;
       
    }

   

    
};