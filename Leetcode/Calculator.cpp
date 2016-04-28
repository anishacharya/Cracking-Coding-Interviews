public class Solution {
    public int calculate(String s) 
    {
    int n;
    if(s == null || (n = s.length()) == 0) 
    {
        return 0;
    }
    
    int num = 0;
    
    Stack<Integer> stack = new Stack<>();
    
    char sign = '+';
    
    for(int i = 0; i <= n; i++) 
    {
        char c = i == n ? 0 : s.charAt(i);
        
        if(Character.isDigit(c)) 
        {
            num = num * 10 + c - '0';
        }
        
        if(!Character.isDigit(c) && c != ' ') 
        {
            if(sign == '+') 
            {
                stack.push(num);
            } 
            else if(sign == '-') 
            {
                stack.push(-num);
            } 
            else if(sign == '*') 
            {
                stack.push(stack.pop() * num);
            } 
            else if(sign == '/') 
            {
                stack.push(stack.pop() / num);
            }
            
            num = 0;
            sign = c;
        }
    }
    int res = 0;
    for(int i : stack) 
    {
        res += i;
    }
    return res;
}
}
