//找下标规律

class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        
        if(numRows==1) return s;
        
        int len=s.length();
        
        for(int i=0;i<numRows;i++){
            int pos=i;
            int step1=(numRows-i-1)*2;
            int step2=i*2;
            
            if(pos<len) result+=s[pos];
            while(1){
                pos+=step1;
                if(pos>=len) break;
                if(step1) result+=s[pos];
                pos+=step2;
                if(pos>=len) break;
                if(step2) result+=s[pos];
            }
        }
        return result;
    }
};
