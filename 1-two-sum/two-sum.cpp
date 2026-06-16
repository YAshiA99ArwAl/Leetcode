class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        // int left = 0, right = n-1;
        // while(left<=right){
        //     if(nums[left] + nums[right] == target){
        //         return {left, right};
        //     } else {
        //         if(nums[left] + nums[right] < target){
        //             left++;
        //         } else if(nums[left] + nums[right] > target){
        //             right--;
        //         } 
        //     }
        // }
        // return {-1, -1};

        unordered_map<int, int> s;
        for(int i=0; i<n; i++){
            int complement = target-nums[i];
            if(s.find(complement) != s.end()){
                return {s[complement], i};
            } 
            s[nums[i]] = i;
        }
        return {-1,-1};
        
    }
};