//If we list all the natural numbers below 10 that are multiples 
//of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below N.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long N,num,three,five,fifteen=0;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>num;
        //int sum=0;
        three=(num-1)/3;
        five=(num-1)/5;
        fifteen=(num-1)/15;
        
        cout << 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2)<<endl;
        
    }
    return 0;
}

