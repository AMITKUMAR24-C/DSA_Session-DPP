/* Preorder - Transversal*/

void preorder(TreeNode*&root,vector<int>&pre){
        if(root)
        {
            pre.push_back(root->val);
            preorder(root->left,pre);
            preorder(root->right,pre);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> pre;
        preorder(root,pre);
        return pre;
    }

/* Inorder - Transveral*/

void Inorder(TreeNode* &root,vector<int> &val)
    {
        if(root)
        {
        Inorder(root->left,val);
        val.push_back(root->val);
        Inorder(root->right,val);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        Inorder(root,ans);
        return ans;
    }

/* Postorder - Transversal*/

 void post(TreeNode* &root, vector<int> &ans)
    {
        if(root)
        {
            post(root->left,ans);
            post(root->right,ans);
            ans.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        post(root,ans);
        return ans;
    }
