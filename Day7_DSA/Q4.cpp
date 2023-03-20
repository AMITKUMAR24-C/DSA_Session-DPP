vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*> que;
        que.push(root);
        /* if level is even = it's from left to right
        means bool = 1 or true else bool is 0 or false
        as intial level is 0 so it's true*/
        bool checklevel = true;
        vector<int> vec;
        while(!que.empty())
        {
            int n = que.size();
            vec.clear();
            for(int i=0;i<n;i++)
            {
                TreeNode* node = que.front();
                que.pop();
                vec.push_back(node->val);
                // vec[i] = node->val;
                // int index = 0;
                if(node->left)
                {
                    que.push(node->left);
                }
                if(node->right)
                {
                    que.push(node->right);
                }
            }
                if(checklevel)
                {
                    ans.push_back(vec);
                    checklevel = 0;
                }
                else
                {
                    reverse(vec.begin(),vec.end());
                    ans.push_back(vec);
                    checklevel = 1;
        }
        return ans;
    }
