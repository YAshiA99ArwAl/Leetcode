class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0, one = 0, two = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==0) zero++;
            if(nums[i]==1) one++;
            if(nums[i]==2) two++;
        }
        int x=0;
        for(int i=0; i<zero; i++){
            nums[i]=0;
        }
        x = x+zero;
        for(int i=x; i<one+x; i++){
            nums[i]=1;
        }
        x = x+one;
        for(int i=x; i<n; i++){
            nums[i]=2;
        }
        
    }
};