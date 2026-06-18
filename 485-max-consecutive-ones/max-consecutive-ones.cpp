class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int count=0, cnt = 0;
        for(int i=k; i<n; i++){
            if(nums[i]==1){
                cnt++;
                if(cnt>count)
                    count = cnt;
            } else {
                cnt = 0;
                k = i+1;
            }
        }
        return count;

        
    }
};