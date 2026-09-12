class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sz = nums.size();
        set<int>s;
        for(auto x:nums)
        {
            s.insert(x);
        }
        if(sz>s.size()) return true;
        else return false;
    }
};