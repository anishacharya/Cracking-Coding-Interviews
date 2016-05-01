/*
Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

For example,
Given "egg", "add", return true.

Given "foo", "bar", return false.

Given "paper", "title", return true.

Note:
You may assume both s and t have the same length.
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)
            return false;
            
        std::map<char,char> M;
        std::map<char,char>:: iterator it=M.begin();
        
        std::set<char> S;
        std::set<char>:: iterator it1;
        
        int i=0;
        int j=0;
        
      
        while(i<n1 )
        {
            it=M.find(s[i]);
            
            if(it==M.end()) //not found
            {
                it1=S.find(t[i]);
                if(it1==S.end()) //not found in set
                {
                    M[s[i]]=t[i];//insert in map
                    S.insert(t[i]);
                }
                else
                    return false;
            }
            
            else //found in map
            {
                if(it->second!=t[i])
                    return false;
            }
            i++;
        }
        
        return true;
        
    }
};
