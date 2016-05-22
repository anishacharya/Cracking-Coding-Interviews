//Given a digit string, return all possible letter combinations that the number could represent.
//A mapping of digit to letters (just like on the telephone buttons) is given below.



class Solution {
private:
    map<char,vector<char> >M;
public:
    void help(vector<string>&result,char digit)
    {
        vector<string>temp;
        if(result.size()==0)
        {            
            for(int j=0;j<M[digit].size();j++)
            {
                string tt;
                tt=tt+M[digit][j];
                temp.push_back(tt);
            }
            result=temp;
            return;
        }
        
        for(int i=0;i<result.size();i++)
        {
            for(int j=0;j<M[digit].size();j++)
                temp.push_back(result[i]+M[digit][j]);
        }
        result=temp;
    }
    vector<string> letterCombinations(string digits) 
    {
        vector<string> out;
        
        M['2']={'a','b','c'};
        M['3']={'d','e','f'};
        M['4']={'g','h','i'};
        M['5']={'j','k','l'};
        M['6']={'m','n','o'};
        M['7']={'p','q','r','s'};
        M['8']={'t','u','v'};
        M['9']={'w','x','y','z'};
        
        if(digits.length()==0) return out;
        for(int i=0;i<digits.length();i++)
            help(out,digits[i]);
        
        return out;
    }
};
