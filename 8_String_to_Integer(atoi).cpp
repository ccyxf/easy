class Solution {
public:
    int myAtoi(string str) {
        //if(str.length()==0) return 0;//空串
        
        int i=str.find_first_not_of(' ');
        if(i==string::npos) return 0;//空串或仅含空格
        
        bool isNegative=false;
        if(str[i]=='-'){//负
            isNegative=true;
            i++;
        }
        else if(str[i]=='+'){//正
            i++;
        }
        
        //int result=0;
        long result=0;
        // while(i<=str.length()-1 && str[i]>='0' && str[i]<='9'){//去后缀
        //     if(result>INT_MAX/10) return isNegative?INT_MIN:INT_MAX;
        //     result *= 10;
        //     if(result>INT_MAX-(str[i]-'0')) return isNegative?INT_MIN:INT_MAX;
        //     result += str[i]-'0';
        //     i++;
        // }
        while(i<=str.length()-1 && str[i]>='0' && str[i]<='9') {
            result = result*10 + (str[i]-'0');
            if(result>INT_MAX) return isNegative?INT_MIN:INT_MAX;
            i++;
        }
        
        return isNegative?result*(-1):result;
    }
};
