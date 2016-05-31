//栈
class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        
        for(int i=0;i<s.size();i++){
            switch(s[i]){
                case'(':case'{':case'[':
                    parentheses.push(s[i]);
                    break;
                case')':
                    if(parentheses.empty()) return false;
                    if(parentheses.top()=='(') parentheses.pop();
                    else return false;
                    break;
                case'}':
                    if(parentheses.empty()) return false;
                    if(parentheses.top()=='{') parentheses.pop();
                    else return false;
                    break;
                case']':
                    if(parentheses.empty()) return false;
                    if(parentheses.top()=='[') parentheses.pop();
                    else return false;
                    break;
                default:
                    break;
            }
        }
        return parentheses.empty();
    }
};
