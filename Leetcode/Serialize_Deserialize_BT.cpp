/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

   string serialize(TreeNode* root) {
    deque<TreeNode*> nodes{root};
    string ans="";
    while(!nodes.empty()){
        TreeNode* head=nodes.front();
        nodes.pop_front();
        if(head!=NULL){
            ans+= to_string(head->val)+" ";
            nodes.push_back(head->left);
            nodes.push_back(head->right);
        }
        else{
            ans+="null ";
        }
    }
    return ans;
}

// Decodes your encoded data to tree.
TreeNode* deserialize(string data) {
    istringstream in(data);
    vector<TreeNode *> nodes;
    string tmp;
    while(in>>tmp){
        if(tmp!="null"){
            nodes.push_back(new TreeNode(stoi(tmp)));
        }
        else{
            nodes.push_back(NULL);
        }
    }
    int pos=0, offset=1;
    while(offset < nodes.size()){
        if(nodes[pos]!=NULL){
            nodes[pos]->left=nodes[offset++];
            if(offset<nodes.size()) nodes[pos]->right=nodes[offset++];
        }
        pos+=1;
    }
    return nodes[0];
}
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
