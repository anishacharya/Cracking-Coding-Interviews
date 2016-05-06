int longest_flat(int *array, int array_length) 
{
    int max=0;
    int curr=1;
    
    for(int i=0;i<array_length;i++)
    {
        int val=array[i];i++;
        while(array[i]==val && i!=array_length)
        {
            cout<<array[i]<<endl;
            i++;curr++;
        }
        i--;
        if(curr>max)
            max=curr;
        curr=1;
    }
    return max;
}
