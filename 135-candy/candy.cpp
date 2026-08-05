class Solution {
public:
    int candy(vector<int>& ratings) {
        int prev = 0, curr = 0;
        int n = ratings.size();
        vector<int> count(n,1);
        int sum = 0;
        for(int i=1; i<n; i++){
            if(ratings[i-1] < ratings[i])
                count[i] = count[i-1] + 1;
        }
        for(int i=n-2; i>=0; i--){
            if(ratings[i] > ratings[i+1])
                count[i] = max(count[i+1] + 1, count[i]);
        }
        for(int i=0; i<count.size(); i++){
            sum += count[i];
        }
        return sum;
    }
};