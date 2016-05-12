//注意溢出

class Solution {
public:
    int reverse(int x) {//int，范围[-2^31,2^31-1]，32bit，4字节
        long result=0;//或者long long[ int]，范围[LLONG_MIN,LLONG_MAX]，64位，8字节
        while(x) {
            result=result*10+x%10;//-123/10=-12，-123%10=-3
            x/=10;
        }
        return (result<numeric_limits<int>::min()||result>INT_MAX)?0:result;
    }
};
