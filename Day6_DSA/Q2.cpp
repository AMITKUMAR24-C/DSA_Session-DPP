vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*> pos;
        pos.push(root);
        while(!pos.empty())
        {
            vector<int> temp;
            int n = pos.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* amit = pos.front();
                pos.pop();
                if(amit->left!=NULL)
                {
                    pos.push(amit->left);
                }
                if(amit->right!=NULL)
                {
                    pos.push(amit->right);
                }
                temp.push_back(amit->val);
            }
            ans.push_back(temp);
        }
        return ans;
   }
