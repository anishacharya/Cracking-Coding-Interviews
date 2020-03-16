class Solution {
public:
    int titleToNumber(string s) 
    {
        int r=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            r=r*26;
            r=r+s[i]-'A'+1;
        }
        return r;
    }
};