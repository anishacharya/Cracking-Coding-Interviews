/*
Write a function:
int solution(vector<int> &A);
that, given a non-empty zero-indexed array A of N integers, 
returns the minimal positive integer (greater than 0) that does not occur in A.
*/

#include <map>

int solution(vector<int> &A) 
{
    map<int,int>M;
    map<int,int>::iterator it;
    int N=A.size();
    
    for(int i=0;i<N;i++)
        M[A[i]]++;
    
    for(int i=1;i<N;i++)
    {
        it=M.find(i);
        if(it==M.end())
            return i;
        }
    return N+1; 
}

// SCORE = 88% 
// The following issues have been detected: wrong answers.
// For example, for the input [0] the solution returned a wrong answer (got 2 expected 1).
// Detected time complexity: O(N)
/*
▶ example 
example (without minus) ✔OK
expand allCorrectness tests
▶ extreme_single 
a single element ✘WRONG ANSWER 
got 2 expected 1
▶ simple 
simple test ✔OK
▶ extreme_min_max_int 
MININT and MAXINT (with minus) ✔OK
▶ positive_only 
shuffled sequence of 0...100 and then 102...200 ✔OK
▶ negative_only 
shuffled sequence -100 ... -1 ✔OK
expand allPerformance tests
▶ medium 
chaotic sequences length=10005 (with minus) ✔OK
▶ large_1 
chaotic + sequence 1, 2, ..., 40000 (without minus) ✔OK
▶ large_2 
shuffled sequence 1, 2, ..., 100000 (without minus) ✔OK
▶ large_3 
chaotic + many -1, 1, 2, 3 (with minus) ✔OK
*/
