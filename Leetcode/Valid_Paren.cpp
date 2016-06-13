class Solution {
public:

    bool is_valid(char a, char b)
    {
        return(a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']');
    }
    bool isValid(string s) 
    {
        stack<char> stack;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stack.push(s[i]);
                
            else if(s[i]==')' || s[i]=='}' ||s[i]==']')
            {
                if(stack.empty())
                    return false;
                if(!is_valid ( stack.top(), s[i] ))
                    return false;
                stack.pop();    
            }
        }
        
        return stack.empty();
    }
};
