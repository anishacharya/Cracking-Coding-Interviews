class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    int *left = (int *)malloc(sizeof(int)*n);
    int *right = (int *)malloc(sizeof(int)*n);
    left[0]=1;
    right[n-1]=1;
    vector<int> Output;
    for(int i=1;i<n;i++)
        left[i]=left[i-1]*nums[i-1];
    for(int i=n-2;i>=0;i--)
        right[i]= nums[i+1]* right[i+1];
    for(int i=0;i<n;i++)
        {
            int prod=left[i]*right[i];
            Output.push_back(prod);
        }
    return Output;
    }
};
