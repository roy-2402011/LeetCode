class Solution {
public:
    int singleNumber(vector<int>& nums) {
   sort(nums.begin(), nums.end());
        int sz = nums.size();
        int ans =0;
        for(int i=0; i<sz-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                nums[i+1] = -1 * nums[i+1];
               
            }
             ans= ans + nums[i];
        }

        ans = ans+ nums[sz-1];
        
        return ans;
    }
};