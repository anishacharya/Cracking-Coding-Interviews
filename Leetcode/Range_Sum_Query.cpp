/*
## 303.
Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.

Example:
Given nums = [-2, 0, 3, -5, 2, -1]

sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3
Note:
You may assume that the array does not change.
There are many calls to sumRange function.
1 2 3 4 5 6
1 3 6 10 15 21
*/

class NumArray {
public:
    vector <int> V;
    NumArray(vector<int> &nums) 
    {
        V = nums;
        if(V.size() > 1)
        {
            for(int i=1;i<V.size();i++)
            {
                V[i] = V [i-1] + V[i];
            }
        }
    }

    int sumRange(int i, int j) 
    {
        if(i == 0)
            return V[j];
        else
            return V[j] - V[i-1];
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);
