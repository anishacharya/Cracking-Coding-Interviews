/*
Input Format
The first line of the input contains N,where N is the number of integers.The next line contains N integers separated by a space.
Output Format
Print the N integers of the array in the reverse order in a single line separated by a space.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size,n;
    cin>>size;
    int arr[size];
    int i=0;
    while(cin>>n)
        {
        arr[i]=n;
        //cout<<n<<endl;
        i++;
    }
    //i--;
    while(i>0)
        {
        cout<<arr[i-1]<<" ";
        i--;
    }
    return 0;
}
