// count leaf nodes - codestudio

void inorder(BinaryTreeNode<int> *root , int &cnt)
{
    // base case

    if (root == NULL)
    {
        return;
    }

    inorder(root->left , cnt);
    if (root -> left == NULL && root -> right == NULL) {
        cnt++ ;
    }
    // cout << root->data << " ";
    inorder(root->right , cnt);
}
