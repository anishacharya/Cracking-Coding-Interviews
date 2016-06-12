string compress(string str) 
{
    string out;
    int n=str.length();
    //cout<<n<<endl;
    if(n==0)
        return out;
    
    char current=str[0]; 
    
    int count=1; 
    int i=1;
    
    while(i <= n)
    {
        while(str[i]==current && i<n)
        {
            count++;
            i++;    
        }
        
        if(count>1)
            out=out+current+to_string(count);
        else
            out=out+current;
        
        current=str[i]; 
        count=1;
        i++;
    }    
    return out;
}


