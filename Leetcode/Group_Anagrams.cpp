class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        map<string,vector<int> >M; 
        int n=strs.size();
        vector<vector<string>>Out;
        
        string s;
        
        for(int i=0;i<n;i++)
        {
            s=strs[i];
            sort(s.begin(),s.end());
            M[s].push_back(i);
            cout<<i<<endl;
            cout<<s<<endl;
        }
        
        for(map<string,vector<int> >::iterator it=M.begin();it!=M.end();it++)
        {
            vector<string> tmp;
            tmp.clear();
            vector<int>tmp_lst=it->second;
            
            for(int i=0;i<tmp_lst.size();i++)
                {
                    int ix=tmp_lst[i];
                    tmp.push_back(strs[ix]);
                }
            sort(tmp.begin(),tmp.end());    
            Out.push_back(tmp);    
        }
        return Out;    
    }
};
