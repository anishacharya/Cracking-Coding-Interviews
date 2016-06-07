class Solution {
public:
int myAtoi(string str) {
        long result = 0;
        bool negative = false;
        int i = 0;
        while(str[i]==' ')
            i++;
        if (str[i] == '-') negative = true,i++; 
        else if (str[i] == '+') i++;
        for (int n = i; i - n <= 10 && isdigit(str[i]); i++) result = result * 10 + (str[i]-'0');
        if (negative) result = -result;
        return (result > INT_MAX ? INT_MAX : (result < INT_MIN ? INT_MIN : result));
    }
};
