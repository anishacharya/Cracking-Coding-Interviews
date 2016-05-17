/// -----UNION - INTERSECTION - SET DIFF ----- ///
#include <iostream>
#include<vector>
using namespace std;

void findU_I(int A[], int B[],int m, int n, vector<int> &Union, vector<int> &Intersection)
{
    int i=0;  int j=0;
    int curr;
    
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            if(curr!=A[i])
                Union.push_back(A[i]);
            curr=A[i];
            i++;
        }
        else if(A[i]==B[j])
        {
            if(curr!=A[i])
            {
                Union.push_back(A[i]);
                Intersection.push_back(A[i]);
            }
            curr=A[i];
            i++;
            j++;
        }
        else //when (A[i]>B[j])
        {
            if(curr!=B[j])
                Union.push_back(B[j]);
            curr=B[j];
            j++;
        }
    }
    //cout<<"after while"<<curr<<endl;
    while(i<m)
    {
        if(A[i]!=curr)
            Union.push_back(A[i]);
        curr=A[i];
        i++;    
        
    }
        
    while(j<n)
    {
        if(B[j]!=curr)
            Union.push_back(B[j]);
        curr=B[j];
        j++;    
        
    }
}
void SetDiff(int A[], int B[],int m, int n, vector<int> &set)
{
    int i=0;
    int j=0; int count=0;
    int curr;
    cout<<curr<<endl;
    
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            if(curr!=A[i] || count ==0)  // In Case the default curr == the first element in Soln. 
            {
                set.push_back(A[i]);
                curr=A[i]; count++;
            }
            i++;
        }
        if(A[i]==B[j])
        {
            if(curr!=A[i])
            {
                curr=A[i];
                
            }
            i++;
            j++;
        }
    }
}
void print_vector(vector<int> V)
{
    for(int i=0; i<V.size();i++)
        cout<<V[i]<<","<<endl;
}

int main() {
    int A[] = {0,1,2,2,3};
    int B[] = {3,3,4,4};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);
    vector<int> Union;
    vector<int> Intersection;
    vector<int> set;
    
    findU_I(A,B,m,n,Union,Intersection);
    cout<<"Union"<<endl;
    print_vector(Union);
    cout<<"Intersection"<<endl;
    print_vector(Intersection);
    SetDiff(A,B,m,n,set);
    cout<<"Set Difference"<<endl;
    print_vector(set);
    return 0;
}
