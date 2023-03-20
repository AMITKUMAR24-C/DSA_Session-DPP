vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> ani;
        queue<pair<TreeNode*,pair<int,int>>> pq;
        pq.push({root,{0,0}});
        while(!pq.empty())
        {
            auto temp = pq.front();
            pq.pop();
            TreeNode* amit = temp.first;
            int x = temp.second.first;
            int y = temp.second.second;
            ani[x][y].insert(amit->val);
            if(amit->left!=NULL)
            {
                pq.push({amit->left,{x-1,y+1}});
            }
            if(amit->right!=NULL)
            {
                pq.push({amit->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> ams;
        for(auto it : ani)
        {
            vector<int> pr;
            for(auto am : it.second)
            {
                pr.insert(pr.end(),am.second.begin(),am.second.end());
            }
            ams.push_back(pr);
        }
        return ams;
    }
