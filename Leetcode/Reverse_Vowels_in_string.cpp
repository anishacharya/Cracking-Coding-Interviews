/*
Write a function that takes a string as input and reverse only the vowels of a string.
Example 1:
Given s = "hello", return "holle".
Example 2:
Given s = "leetcode", return "leotcede".
*/
class Solution {
public:
    string reverseVowels(string s) 
    {
        
        int start=0;
        int end=s.length()-1;
        
        while(start<end)
        {
            while(s[start]!='a'&& s[start]!='e'&& s[start]!='i' && s[start]!='o' && s[start]!='u' && s[start]!='A' && s[start]!='E' && s[start]!='I' && s[start]!='O' && s[start]!='U')
                start++;
                
            while(s[end]!='a' && s[end]!='e'&& s[end]!='i' && s[end]!='o' && s[end]!='u' && s[end]!='A' && s[end]!='E' && s[end]!='I' && s[end]!='O' && s[end]!='U')
                end--;
             
             if(start<end)
             {
                 char temp=s[start];
                 s[start]=s[end];
                 s[end]=temp;
             }
             
             start++;
             end--;
        }
        
        return s;
        
    }
};
