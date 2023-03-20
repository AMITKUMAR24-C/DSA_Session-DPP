                                    /* Search in a Binary Search Tree*/

TreeNode* searchBST(TreeNode* root, int val) { 
  // Method 1 - Recursion
        if(root==NULL)
        return NULL;
        if(root->val==val)
        return root;
        if(root->val > val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
  // Method 2 
  
        while(root!=NULL && root->val!=val)
        {
            if(val < root->val)
            {
                root = root->left;
            }
            else
            {
               root = root->right;
            }
        }
        return root;
    }

                                /*   Insert into a Binary Search Tree   */


TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode* amit = new TreeNode(val);
            return amit;
        }
        if(root->val > val)
        {
            root->left = insertIntoBST(root->left,val);
        }
        if(root->val<val)
        {
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }


                             /*   Delete Node into a Binary Search Tree   */



    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return NULL;
        if(root->val > key)
        {
            root->left = deleteNode(root->left,key);
        }
        else if(root->val < key)
        {
            root->right = deleteNode(root->right,key);
        }
        else
        {
            // both-subtree is NULL
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            // right-subtree is NULL
            else if(root->left!=NULL && root->right==NULL)
            {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // left-subtree is NULL
            else if(root->right!=NULL && root->left==NULL)
            {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            // No subtree is NULL
            else
            {
               TreeNode* temp = root->right;
               while(temp->left != NULL)
               {
                   temp = temp->left;
               }
               root->val = temp->val;
               root->right = deleteNode(root->right,temp->val);
               return root;
            }
        }
        return root;
    }
