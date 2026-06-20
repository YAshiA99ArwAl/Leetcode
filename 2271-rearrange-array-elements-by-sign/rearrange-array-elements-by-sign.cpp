class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;
        for(int i=0; i<n; i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        int n1=0, n2=0, i=0;
        while(n1<pos.size() && n2<neg.size()){
            if(i%2==0)
                nums[i++] = pos[n1++];
            else
                nums[i++] = neg[n2++];
        }
        while(n1<pos.size()){
            nums[i++] = pos[n1++];
        }
        while(n2<neg.size()){
            nums[i++] = neg[n2++];
        }
        return nums;
        
    }
};