/*
A non-empty zero-indexed array A consisting of N integers is given. 
The array contains an odd number of elements, and each element
of the array can be paired with another element that has the same value, except for one element that is left unpaired.
For example, in array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the elements at indexes 0 and 2 have value 9,
the elements at indexes 1 and 3 have value 3,
the elements at indexes 4 and 6 have value 9,
the element at index 5 has value 7 and is unpaired.

Write a function:
int solution(vector<int> &A);
that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.
*/

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11
    int N=A.size();
    int lonely=A[0];
    
    for(int i=1;i<N;i++)
    {
        lonely=lonely^A[i];       // XOR will nullify pairs
        }
        return lonely;
}

//SCORE 100%
/*
Detected time complexity:
O(N*log(N)) or O(N)
collapse allExample tests
▶ example1 
example test ✔OK
1. 0.009 s OK
collapse allCorrectness tests
▶ simple1 
simple test n=5 ✔OK
1. 0.009 s OK
▶ simple2 
simple test n=11 ✔OK
1. 0.009 s OK
▶ extreme_single_item 
[42] ✔OK
1. 0.009 s OK
▶ small1 
small random test n=201 ✔OK
1. 0.009 s OK
▶ small2 
small random test n=601 ✔OK
1. 0.009 s OK
collapse allPerformance tests
▶ medium1 
medium random test n=2,001 ✔OK
1. 0.009 s OK
▶ medium2 
medium random test n=100,003 ✔OK
1. 0.024 s OK
▶ big1 
big random test n=999,999, multiple repetitions ✔OK
1. 0.106 s OK
▶ big2 
big random test n=999,999 ✔OK
1. 0.217 s OK
*/
