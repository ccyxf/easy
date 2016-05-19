//非法输入处理可选
class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        int count=0;
        int i;
        map<char,int> myMap;
        myMap['I']=1;
        myMap['V']=5;
        myMap['X']=10;
        myMap['L']=50;
        myMap['C']=100;
        myMap['D']=500;
        myMap['M']=1000;
        
        for(i=0;i<s.length()-1;i++){
            if(myMap[s[i]]>myMap[s[i+1]]){
                count=0;
                result+=myMap[s[i]];
            }
            else if(myMap[s[i]]==myMap[s[i+1]]){
                if(count==2) return 0;
                count++;
                result+=myMap[s[i]];
            }
            else{
                switch(s[i]){
                    case 'I':
                        if(s[i+1]!='V' && s[i+1]!='X') return 0;
                        break;
                    case 'X':
                        if(s[i+1]!='L' && s[i+1]!='C') return 0;
                        break;
                    case 'C':
                        if(s[i+1]!='D' && s[i+1]!='M') return 0;
                        break;
                    default:
                        return 0;
                        break;
                }
                result-=myMap[s[i]];
                count=0;
            }
        }
        result+=myMap[s[i]];
        
        return result;
    }
};
