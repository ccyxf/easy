class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        int quotient=0;
        string result="";
        
        while(i>=0 || j>=0 || quotient==1){
            quotient+=i>=0?a[i--]-'0':0;
            quotient+=j>=0?b[j--]-'0':0;
            result=char(quotient%2+'0')+result;
            quotient/=2;
        }
        
        return result;
    }
};
