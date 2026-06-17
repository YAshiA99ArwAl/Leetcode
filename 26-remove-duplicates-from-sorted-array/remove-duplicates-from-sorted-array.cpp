class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int temp = nums[0], pos = 1;
        for(int i=1; i<n; i++){
            if(temp == nums[i])
                continue;
            else {
                temp = nums[i];
                nums[pos] = temp;
                pos++;
            }
        }
        return pos;
    }
};