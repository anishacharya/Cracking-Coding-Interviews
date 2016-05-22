class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length())
            return false;
            
        std::map<char,int> M;
        cout<<"here"<<endl;    
        for(int i=0;i<s.length();i++)
        {
            M[s[i]]++;
        }
        std::map<char,int>:: iterator it=M.begin();
        
        for(int i=0;i<t.length();i++)
        {
            it=M.find(t[i]);
            if(it==M.end()) //not found
                return false;
            else //found
            {
                M[t[i]]--; //reduce the count
            }
        }
        
        for(map<char,int>::iterator it1=M.begin(); it1!=M.end();it1++)
        {
            if(it1->second!=0)
                return false;
        }
        return true;
        
        
    }
};
