#include <iostream>
#include <vector>
#include<cmath>
#include<climits>

using namespace std;

int balanced_array(vector<int> V)
{
    int left_sum=0;
    int right_sum=0;
    
    for(int i=0;i<V.size();i++)
        right_sum=right_sum+ V[i];
    
    int n=V.size();    
        
    int i=0;
    int min=INT_MAX;
    int min_ix=-1;
    
    
    while(i<n)
    {
        left_sum=left_sum+V[i];
        right_sum-=V[i];
        if(left_sum==right_sum)
            return i;
        else
        {
            int diff=abs(left_sum-right_sum);
            if(diff<min)
            {
                min=diff;
                min_ix=i;
                
            }
            
        }
        i++;
    }
    
    return min_ix;
}
using namespace std;

int main() 
{
	// your code goes here
    vector<int>V;
    V.push_back(7);
    V.push_back(2);
    V.push_back(2);
    V.push_back(10);
    
    cout<<balanced_array(V);
	return 0;
}

