class Solution {
public:
    bool wordPattern(string pattern, string str) 
    {
        stringstream strstr(str);
        std::istream_iterator<std::string> it1(strstr);
        std::istream_iterator<std::string> end;
        vector<string>Input(it1,end);
        map<string,char> Map;
        map<string,char>::iterator it=Map.begin();
        set<char> S;
        set<char>::iterator x=S.begin();
        if(Input.size()!=pattern.length())
            return false;
        for(int i=0;i<Input.size();i++)
        {
            it=Map.find(Input[i]);
            if(it==Map.end())
            {
                x=S.find(pattern[i]);
                if(x==S.end())
                {
                    Map[Input[i]]=pattern[i];
                    S.insert(pattern[i]);
                }
                else
                    return false;
            }
            else
            {
                if(it->second!=pattern[i])
                    return false;
            }
        }
        return true;
    }
};
