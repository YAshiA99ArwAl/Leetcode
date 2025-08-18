class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0 || x%10 ==0 && x!=0)
      return false;
    int num=x, rev=0;
    while(num>rev){
      rev = rev*10 + num%10;
      num /= 10;
    } 
    return ( num==rev || num==(rev/10)) ;
  }
};