class Solution {
public:
    bool checkHrs(vector<int>& piles, int mid, int h){
        long long totalhrs = 0;
        for(int i=0; i<piles.size(); i++){
            totalhrs += (piles[i] + (long long)mid - 1)/mid;
        }
        return totalhrs <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(checkHrs(piles, mid, h)){
                ans = mid;
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return ans;
        
    }
};