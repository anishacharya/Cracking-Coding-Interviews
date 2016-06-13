class Solution {
public:
    bool strcompare(string s1, string s2)
    {
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
                return false;
        }
        return true;
    }
    int strStr(string haystack, string needle) 
    {
        int m=needle.length(); //length of pattern
        int n=haystack.length(); // length of string
        
        if(m==n)
        {
            if(strcompare(needle,haystack))
                return 0;
            return -1;
        }    
       
        for(int i=0; i<n-m+1;i++)
        {
            string str=haystack.substr(i,m);
            if(strcompare(needle,str))
                return i;
        }
        
        return -1;
    }
};
