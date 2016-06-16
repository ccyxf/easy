//递归会超时
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return 1;
        if(n==2) return 2;
        
        int one_step_before = 2;
        int two_steps_before = 1;
        int total=0;
        
        for(int i=3;i<=n;i++){
            total=one_step_before+two_steps_before;
            two_steps_before=one_step_before;
            one_step_before=total;
        }
        
        return total;
    }
};
