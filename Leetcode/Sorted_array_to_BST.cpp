/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* newNode(int val)
  {
    TreeNode* node = (struct TreeNode*)
                         malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
 
    return node;
  }

    TreeNode* sortedarraytobst(vector<int>& nums, int start, int end)
    {
        if(start>end)
            return NULL;
            
        int mid=start+(end-start)/2;
        TreeNode* root=newNode(nums[mid]);
        root->left=sortedarraytobst(nums,start,mid-1);
        root->right=sortedarraytobst(nums,mid+1,end);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return sortedarraytobst(nums,0,nums.size()-1);
        
    }
};
