class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, size=nums.size();
        vector<int> arr(2);
        for(i=0; i<size; i++){
          for(j=0; j<i; j++){
            if(nums[j]+nums[i]==target) {
              arr[0]=j;
              arr[1]=i;
              return arr;
            }
          }
        }
        return arr;
    }
};