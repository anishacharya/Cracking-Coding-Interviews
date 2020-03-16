/*
Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int carrey=1;
        int n=digits.size()-1;
        //vector<int>::iterator it=digits.end();
        int temp;
        for(int ix=n;ix>=0;ix--)
        {
            //cout<<"carrey="<<carrey<<endl;
            temp=digits[ix];
            digits[ix]=(digits[ix]+carrey)%10;
            carrey=(temp+carrey)/10;
            //cout<<(0+1)%10<<endl;
            cout<<"End Carrey"<<carrey<<endl;
        }
        //it++;
        if(carrey!=0)
            digits.insert(digits.begin(),carrey);
        return digits;    
    }
};
