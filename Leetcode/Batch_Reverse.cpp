/*
Given a array of integer and group size, reverse array by group size, example as follows: 
[1, 2, 3, 4, 5, 6], 1 -> [1, 2, 3, 4, 5, 6] 
[1, 2, 3, 4, 5, 6], 2 -> [2, 1, 4, 3, 6, 5] 
[1, 2, 3, 4, 5, 6], 3 -> [3, 2, 1, 6, 5, 4] 
[1, 2, 3, 4, 5, 6, 7, 8], 3 -> [3, 2, 1, 6, 5, 4, 8, 7] 
Design test cases for you API
*/

#include <iostream>
#include <vector>

using namespace std;

void reverse_rec(vector<int>&Input,int l, int r)
{
    int temp;
    while(l<r)
    {
        temp=Input[r];
        Input[r]=Input[l];
        Input[l]=temp;
        
        l++; r--;
    }
}

void reverse(vector<int>&Input,int k)
{
    int N=Input.size();
    //cout<<N;
    //int l=0; int r = N-1;
    
    if(N<=k)
        return reverse_rec(Input,0,N-1);
        
    int rem=N%k;
    
    int l=0; int r=k-1;
        
    int end=N-rem-1;

    while(r<=end)
    {
        reverse_rec(Input,l,r);
        l=l+k;
        r=r+k;
    }
    
    if(end<N-1)
    {
       reverse_rec(Input,end+1,N-1); 
    }
}

int main() 
{
    vector<int> Input;
    for (int i=1;i<9;i++)
	    Input.push_back(i);
	int k=3;
	
	reverse(Input,k);
	for (int i=0;i<Input.size();i++)
	    cout<<Input[i]<<endl;
	return 0;
}

