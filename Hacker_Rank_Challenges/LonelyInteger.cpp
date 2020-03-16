/*
Problem Statement

There are N integers in an array A. All but one integer occur in pairs. 
Your task is to find the number that occurs only once.

Input Format

The first line of the input contains an integer N, indicating the number of integers. 
The next line contains N space-separated integers that form the array A.


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
int lonelyinteger(vector < int > a) {
    int N=a.size();
    int out=0;
    for(int i=0;i<N;i++)
        out=out^a[i];
return out;

}
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
