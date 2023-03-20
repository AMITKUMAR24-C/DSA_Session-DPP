TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Step 1 - General Case
        if(root==NULL)
        return NULL;
        // Step 2 - checking if root is equal to given value or not
        if(root==p)
        return p;
        if(root==q)
        return q;
        // Step 3 - Recursion Call for left and right
        TreeNode* leftBST = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightBST = lowestCommonAncestor(root->right,p,q);
        // final Step - Check the node val
        if(leftBST!=NULL && rightBST!=NULL)
        return root;
        if(leftBST==NULL && rightBST!=NULL)
        return rightBST;
        if(leftBST!=NULL && rightBST==NULL)
        return leftBST;
        return NULL;
    }
