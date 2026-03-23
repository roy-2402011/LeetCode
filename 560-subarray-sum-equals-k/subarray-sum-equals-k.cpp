class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // vector<int>sum(n);
        // sum[0]=nums[0];

        // for(int i=1; i<nums.size() ; i++)
        // {
        //     sum[i]=nums[i] + sum[i-1];
        // }
        
        // for(int i=0;i<nums.size(); i++)
        // {
        //     if(sum[i]==k)
        //     {
        //         return i+1;
        //     }
        // }
        // return -1;
    
    int count = 0;
    for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = i; j < n; j++) {
        sum += nums[j];
        if(sum == k) count++;
    }
}
return count ;
    }
    
};