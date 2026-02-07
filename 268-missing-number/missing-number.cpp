class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz=nums.size();
        int x=0;
        for(int i=0;i<=sz;i++)
        {
            x^=i;
        }
        for(auto u:nums)
        {
            x^=u;
        }
        return x;
    }
};