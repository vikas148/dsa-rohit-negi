class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return 1;

        int last = 1, prev = 1, curr;

        for(int i=2; i<=n; ++i){
          curr = prev+last;
          last = prev;
          prev = curr;
        }

        return curr;
    }
};