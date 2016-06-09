/*
 * Complete the function below.
 */
bool complement(char a, char b)
{
    if(a=='(' && b==')')
        return true;
    if(a=='{' && b=='}')
        return true;
    if(a=='[' && b==']')
        return true;
    return false;
}

bool check(string in)
{
        stack<char>S;
        for(int j=0;j<in.length();j++)
        {
            if(in[j]=='['||in[j]=='{'||in[j]=='(')
                S.push(in[j]);
            
            if(in[j]==']'||in[j]=='}'||in[j]==')')
            {
                if(S.empty())
                    return false;   
                else
                {
                    if(complement(S.top(),in[j])==false)
                        return false;
                    S.pop();
                }
            }
            
        }
        if(S.size()!=0)
           return false;
        return true;
}
vector < string > Braces(vector < string > values) 
{
    vector<string>out;
    for(int i=0;i<values.size();i++)
    {
        string in=values[i];
        cout<<in<<"size="<<in.length()<<endl;
        if(check(in))
            out.push_back("YES");
        else
            out.push_back("NO");
    }
    return out;
}


