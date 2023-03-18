vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> treelevel;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        if(root==NULL)
        return ans;
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL)
            {
                ans.push_back(treelevel);
                treelevel.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                treelevel.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        return ans;
    }
