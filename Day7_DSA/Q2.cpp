          /*    Ceil in BST   */


int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int ceil = -1;
    while(root)
    {
        if(root->data==input)
        {
            ceil = root->data;
            return ceil;
        }
        if(root->data < input)
        {
            root = root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}

          /*  Floor in BST */

int floor(Node* root, int x) {
     int ceil = -1;
    while(root)
    {
        if(root->data==x)
        {
            ceil = root->data;
            return ceil;
        }
        if(root->data < x)
        {
            ceil = root->data;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return ceil;
}
