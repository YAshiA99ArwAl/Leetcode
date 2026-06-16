class Solution {
public:
    bool check(vector<int>& nums) {
        int l = nums.size();
        int cnt = 0;
        for(int i=0; i<l; i++){
            if(nums[i]>nums[(i+1)%l])
            cnt++;
        }
        return cnt<=1;
        
    }
};