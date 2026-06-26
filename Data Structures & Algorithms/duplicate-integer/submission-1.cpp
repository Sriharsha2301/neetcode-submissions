class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        for(;i<n;i++){
            if(nums[i]==nums[i+1]) return true;

        }
        return false;
    }
};