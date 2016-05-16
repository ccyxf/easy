//注意溢出
//直接判断
class Solution{
public: 
    int reverse(int x)
    { 
        bool isNegative=false; 
        if(x==0) return x; 
        else if(x<0) { 
            isNegative=true; 
            x*=-1; 
        } 
        int sum=0; 
        int rem=0; //余数
        int dividend=x; //被除数
        while(dividend!=0) { 
            rem= dividend%10; 
            dividend=dividend/10; 
            if(sum > (INT_MAX/10)) return 0; 
            sum *=10 ; 
            if(sum > (INT_MAX-rem)) return 0; 
            sum += rem ;
        }
        if(isNegative) sum *= -1;
        return sum;
    }
};
