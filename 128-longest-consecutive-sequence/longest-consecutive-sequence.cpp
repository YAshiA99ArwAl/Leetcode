class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st(nums.begin(), nums.end());
        int res = 0;

        for(int val: st){
            if(st.find(val-1)==st.end()){
                int curr = val, cnt = 0;
                while(st.find(curr)!=st.end()){
                    curr++;
                    cnt++;
                }
                res = max(res, cnt);
            }
        }
        return res;
        
    }
};