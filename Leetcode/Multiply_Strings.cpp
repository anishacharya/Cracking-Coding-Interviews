class Solution {
public:
    string multiply(string num1, string num2) {
        int len1=num1.length(), len2=num2.length();
        if ( (len1==1 && num1=="0") || (len2==1 && num2=="0"))
            return "0";
        int *ans = new int[len1+len2], k=0;
        memset(ans, 0, (len1+len2)*sizeof(int));
        for (int i=len1-1; i>=0; i--)
            for (int j=len2-1; j>=0; j--)
                ans[len1-1-i + len2-1-j] += (num1[i]-'0')*(num2[j]-'0');
        for (int i=0; i<len1+len2-1; i++)
            ans[i+1] += ans[i]/10, ans[i] %= 10;
        string ret;
        for (int i=len1+len2-1; i>=0; i--)
            ret += to_string(ans[i]);
        while (k<ret.length() && ret[k]=='0') k++;
        return ret.substr(k, ret.length()-k);
    }
};
