/*You are given N integers in the sorted order.Then you are given Q queries.In each query you will be given an integer and you have to tell whether that integer is present in the array,if so you have to tell at which index it is present and if it is not present you have to tell the index at which the smallest integer that is just greater than the given number is present.
For each query you have to print "Yes"(without the quotes)if the number is present and at which index it is present separated by a space.
If the number is not present you have to print "No"(without the quotes) followed by the index of the next smallest number just greater than that number.
You have to output each query in a new line.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int size;
    cin>>size;
    int n;
    
    vector<int> V;
    for(int i=0;i<size;i++)
        {   cin>>n;
            V.push_back(n);
        }
    
    cin>>size;
    vector<int>::iterator it;  
    while(cin>>n)
        {
        it=lower_bound(V.begin(),V.end(),n);
        if(V.at(it-V.begin())==n)
            cout<<"Yes"<<" "<<(it-V.begin()+1)<<endl;
        else
            cout<<"No"<<" "<<(it-V.begin()+1)<<endl;
    }
    return 0;
}
