class Solution {
public:
   int calculate(string s) 
   {
    int res = 0, n = s.size(), sign = 1;
    stack<int> nums;
    
    for (int i = 0; i < n; i++) 
    {
        if (isdigit(s[i])) 
        {
            int num = s[i] - '0';
            while (i + 1 < n && isdigit(s[i + 1])) 
            {
                num = num * 10 + s[i + 1]-'0';
                i++;
            }
            
            res += sign * num;
        }
        
        else if (s[i] == '+') 
        {
            sign = 1;
            nums.push(res);
            res = 0;
        }
        else if (s[i] == '-') 
        {
            sign = -1;
            nums.push(res);
            res = 0;
        }
        
        else if (s[i] == '*' || s[i] == '/') 
        {
            char op = s[i];
            int temp = 0;
            
            while (i + 1 < n && s[i + 1] == ' ')
                i++;
            while (i + 1 < n && isdigit(s[i + 1])) 
            {
                temp = temp * 10 + s[i + 1] - '0';
                i++;
            }
            if (op == '*')
                res *= temp;
            else
                res /= temp;
        }
    }
    while (!nums.empty()) {
        res += nums.top();
        nums.pop();
    }
    return res;
}
};
