// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int count=0;
//         int end=s.find_last_not_of(' ');
        
//         for(int i=end;i>=0;i--){
//             if(s[i]!=' ') count++;
//             else break;
//         }
        
//         return count;
//     }
// };
class Solution{
public:
    int lengthOfLastWord(string s){
        int count=0;
        
        for(int i=s.size()-1;i>=0;i--){
            if(count && s[i]==' ') break;
            else if(s[i]!=' ') count++;
        }
        
        return count;
    }
};
