class Solution {
public:
    long long sumAndMultiply(int n) {
        long long newnum = 0;
        int cnt = 0, sum = 0;
        while(n != 0){
            if(n%10 != 0){
                newnum += ((long long)n % 10) * pow(10, cnt);
                cnt++;
                sum += n%10;
            }
            n /= 10;
        }
        return newnum*sum;
        
    }
};