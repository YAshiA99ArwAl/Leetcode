class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = nums[0], res = nums[0];

        for(int i=1; i<n; i++){
            res = max(nums[i], nums[i]+res);
            maxsum = max(maxsum, res);
        }
        return maxsum;
        
    }
};