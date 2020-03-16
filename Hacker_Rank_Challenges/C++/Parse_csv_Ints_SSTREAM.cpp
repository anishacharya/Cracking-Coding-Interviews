/*

You have to complete the function vector parseInts(string str). str will be a string consisting of comma-separated integers, and you have to return a vector of int representing the integers.

Input Format

The first and only line consists of n integers separated by commas.

Output Format

Print the integers after parsing it. 

*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    stringstream ss(str);
    char ch;
    int n;
    vector<int> integers;
    while(ss>>n)
        {
        integers.push_back(n);
        ss>>ch;
    }
    return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
