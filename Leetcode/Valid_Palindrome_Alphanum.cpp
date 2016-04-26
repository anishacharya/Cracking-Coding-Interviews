/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.
*/
class Solution {
public:
    bool isPalindrome(string s) 
    {
        int l=0; 
        int r=s.length()-1;
        
        while(l<r)
        {
            if(!isalnum(s[l]))
              {  
                  l++;
                  continue;
              }
            if(!isalnum(s[r]))
              {
                 r--;
                 continue;
              }  
              
            if(tolower(s[l])!=tolower(s[r]))
                return false;
            l++;r--;    
        }
        
        return true;
    }
};
