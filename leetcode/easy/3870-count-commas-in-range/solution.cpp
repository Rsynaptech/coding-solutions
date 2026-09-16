class Solution {
public:
    int countCommas(int n) {
      int ans=0;
      int pow=1000;
      while(n>=pow){
        ans+=(n-pow+1);
        pow*=1000;
      }
      return ans;
    }
};