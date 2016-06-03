/*
All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.

Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

For example,

Given s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",

Return:
["AAAAACCCCC", "CCCCCAAAAA"].
*/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        vector<string>out;
        map<string,int>set;
        map<string,int>::iterator it;
        //cout<<s.length()<<endl;
        
        if(s.length()<10)
            return out;
            
        for(int i=0;i<s.length()-9;i++)
        {
            string temp=s.substr(i,10);
            //cout<<temp<<endl;
            it=set.find(temp);
            if(it!=set.end() && it->second == 1)
            {
                out.push_back(temp);
                set[temp]++;
            }
            else
                set[temp]++;    
        }
        return out;
    }
};
