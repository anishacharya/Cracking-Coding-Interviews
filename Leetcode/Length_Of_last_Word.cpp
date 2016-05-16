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
