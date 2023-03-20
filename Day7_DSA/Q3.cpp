int maxsum(TreeNode* node, int &ans)
    {
        if(node==NULL)
        return 0;
        int leftv = max(0,maxsum(node->left,ans));
        int rightv = max(0,maxsum(node->right,ans));
        ans = max(ans,(leftv+rightv+node->val));
        return max(leftv,rightv)+node->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        maxsum(root, ans);
        return ans;
    }
