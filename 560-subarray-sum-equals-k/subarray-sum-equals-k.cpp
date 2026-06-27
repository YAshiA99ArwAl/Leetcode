class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, currsum = 0;

        unordered_map<int, int> prefixSum;
        for(int i=0; i<n; i++){
            currsum += nums[i];
            if(currsum == k)
                count++;
            if(prefixSum.find(currsum-k) != prefixSum.end()){
                count += prefixSum[currsum-k];
            }
            prefixSum[currsum]++;
        } 
        return count;
    }
};