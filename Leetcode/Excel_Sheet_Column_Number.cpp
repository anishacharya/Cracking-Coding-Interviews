// Name to Num
class Solution {
public:
    int titleToNumber(string s) 
    {
        int column=0;
        
        for(int i=0;i<s.length();i++)
            column=column*26 +s[i]-'A'+1;
            
        return column;
    }
};
