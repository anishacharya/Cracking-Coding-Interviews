/*
Problem Statement

Given two integers, L and R, find the maximal value of A xor B, where A and B satisfy the following condition:

L=A=B=R
Input Format

The input contains two lines; L is present in the first line and R in the second line.

Constraints 
1=L=R=103

Output Format

The maximal value as mentioned in the problem statement.

Sample Input

10
15
Sample Output

7
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {

    int max=0;
    for(int i=l;i<=r;i++)
        {
        for(int j=i;j<=r;j++)
        {
            if((i ^ j) > max)
                max=i ^ j;
        }
    }

    return max;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
