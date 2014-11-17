#include<iostream>
#include<bitset>


using namespace std;

int main()
{
	int num1=1;							//Negatives represented as 2's complement
	int num2=-1;
	int const NoOfBit=8;			//bitset<constant>
	bitset<NoOfBit>bset1(num1);
	bitset<NoOfBit>bset2(num2);

	cout<<bset1<<endl;
	cout<<bset1.flip()<<endl;   //ones's complement

	cout<<bitset<NoOfBit>(-num1)<<endl; //two's complement

	return 0;

}
