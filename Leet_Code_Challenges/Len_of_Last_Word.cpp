/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example, 
Given s = "Hello World",
return 5.
*/
class Solution {

public:
    int lengthOfLastWord(string s) 
    {
        if(s.empty())
            return 0;
        int n=s.size();
        cout<<n<<endl;
        int i=n-1;
        int count=0;
        
        while(s[i]==' ')
            i--;
        
        while(i>=0)
        {
            if(('a'<=s[i]&&s[i]<='z')||('A'<=s[i]&&s[i]<='Z'))
            { 
                count++; 
                i--;
            }
            else break;
        }
        return count;
    }
};
