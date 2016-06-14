class Solution {
public:
    string countAndSay(int n) {
        string result="1";
        
        for(int i=1;i<n;i++){
            int count=1;
            char c=result[0];
            string temp="";
            for(int j=1;j<result.size();j++){
                if(result[j]!=c){
                    //temp+=to_string(count)+c;
                    temp+=count+'0';
                    temp+=c;
                    c=result[j];
                    count=1;
                }
                else{
                    count++;
                }
            }
            //temp+=to_string(count)+c;
            temp+=count+'0';
            temp+=c;
            result=temp;
        }
        
        return result;
    }
};
