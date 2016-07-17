#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Compare(int X, int Y)
{
    int XY = 10*X + Y; 
    int YX = 10*Y + X;
    return (XY-YX) > 0 ? 1: 0;
}

vector<int> Get_digits(int num)
{
    vector<int> digits;
    while(num)
    {
        digits.push_back(num % 10);
        num = num / 10;
    }
    return digits;
}

int main()
{
    vector<int> digits = Get_digits(3567);
    sort(digits.begin(),digits.end(),Compare);
    
    for(int i=0; i<digits.size();i++)
        cout<< digits[i];
    cout<<endl;
 
    return 0;
}
