/*
 given a zero-indexed array A consisting of N integers, returns the number of distinct values in array A
 */
 #include<map>
int solution(vector<int> &A) {
    // write your code in C++11
    map<int,int>M;
    map<int,int>::iterator it;
    int N= A.size();
    int count;
    for(int i=0;i<N;i++)
    {
        it=M.find(A[i]);
        if(it==M.end())
        {
            M[A[i]]++;
            count++;
            }
        
        }
        return count;
    
} 

// score 100%
/*
Detected time complexity:
O(N) or O(N*log(N))
collapse allExample tests
▶ example1 
example test, positive answer ✔OK
1. 0.009 s OK
collapse allCorrectness tests
▶ extreme_empty 
empty sequence ✔OK
1. 0.009 s OK
▶ extreme_single 
sequence of one element ✔OK
1. 0.009 s OK
2. 0.009 s OK
▶ extreme_two_elems 
sequence of three distinct elements ✔OK
1. 0.009 s OK
▶ extreme_one_value 
sequence of 10 equal elements ✔OK
1. 0.009 s OK
▶ extreme_negative 
sequence of negative elements, length=5 ✔OK
1. 0.009 s OK
▶ extreme_big_values 
sequence with big values, length=5 ✔OK
1. 0.009 s OK
▶ medium1 
chaotic sequence of value sfrom [0..1K], length=100 ✔OK
1. 0.009 s OK
▶ medium2 
chaotic sequence of value sfrom [0..1K], length=200 ✔OK
1. 0.009 s OK
▶ medium3 
chaotic sequence of values from [0..10], length=200 ✔OK
1. 0.009 s OK
collapse allPerformance tests
▶ large1 
chaotic sequence of values from [0..100K], length=10K ✔OK
1. 0.013 s OK
▶ large_random1 
chaotic sequence of values from [-1M..1M], length=100K ✔OK
1. 0.068 s OK
▶ large_random2 
another chaotic sequence of values from [-1M..1M], length=100K ✔OK
1. 0.068 s OK
*/
