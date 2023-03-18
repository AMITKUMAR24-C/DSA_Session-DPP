

/* Right View of Binary Tree*/
void righttree(TreeNode* root, vector<int>& ans, int level)
    {
        if(root==NULL)
        return;
        if(ans.size()==level)
        ans.push_back(root->val);
        righttree(root->right,ans,level+1);
        righttree(root->left,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        righttree(root,ans,0);
        return ans;
    }
