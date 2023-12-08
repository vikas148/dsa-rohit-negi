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

//ye code tle error dega isko dp se solve krege to nhi
//     class Solution {
// public:
//     int climbStairs(int n) {
//         if( n<=1)
//         return 1;
//         return climbStairs(n-1)+climbStairs(n-2);
//     }
};
};