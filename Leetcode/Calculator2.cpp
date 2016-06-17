class Solution {
public:
    int calculate(string s) 
    {
        vector<int> signs;
        
        int result = 0; 
        int sign = 1;
        int num = 0;
        
        signs.push_back(1);
        
        for (int iter = 0; iter< s.length(); iter++)
        {
            if (s[iter] == ' ')
            {
                continue;
            }
            
            if (isdigit(s[iter]))
            {
                num = num*10+s[iter]-'0';
                continue;
            }
            
            if (s[iter] == ')')
            {
                result = result + num*sign*signs.back();
                num=0;
                signs.pop_back();
                continue;
            }
            
            if (s[iter] == '+')
            {
                result = result + num*sign*signs.back();
                sign = 1;
                num = 0;
                continue;
            }
            
            if (s[iter] == '-')
            {
                result = result + num*sign*signs.back();
                sign = -1;
                num = 0;
                continue;
            }
            
            if (s[iter] == '(')
            {
               result = result+num*sign*signs.back();
               signs.push_back(sign*signs.back());
               sign = 1;
               num = 0;
               continue;
            }

}
    result = result+num*sign*signs.back();
    return result;

        
    }
};
