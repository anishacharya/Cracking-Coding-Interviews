//Given a non-negative number represented as an array of digits, plus one to the number.
//The digits are stored such that the most significant digit is at the head of the list.
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int sum=0; 
        int carry=1;
        int i=digits.size()-1;
        while(i>=0)
        {
            sum=(digits[i]+carry);
            cout<<"i"<<i<<digits[i]<<"sum"<<sum<<endl;
            digits[i]=sum%10;
            carry=sum/10;
            i--;
        }
        std::vector<int>::iterator it;
        if(carry>0)
        {
            it = digits.begin();
            it = digits.insert ( it , carry );
        }
        return digits;    
    }
};
