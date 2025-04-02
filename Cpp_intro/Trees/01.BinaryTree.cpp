#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;

    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

// LEVEL ORDER TRAVERSAL
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // seperator

    while (!q.empty())
    {
        node *temp = q.front();
        // cout << temp->data << " ";
        q.pop();

        if (temp == NULL) // purana level complete traverse ho chuka hai
        {
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// INORDER TRAVERSAL
void inorder(node *root)
{
    // base case

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


// PREORDER TRAVERSAL
void preorder(node *root)
{
    // base case

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}


// POSTORDER TRAVERSAL
void postorder(node *root)
{
    // base case

    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


void BuildFromLevelOrder(node* &root) {
    queue<node*> q ;
    cout << "enter data for root " << endl ;
    int data ;
    cin >> data ;
    root = new node(data) ;
    q.push(root) ;

    while (!q.empty()) {
        node* temp = q.front() ;
        q.pop() ;

        cout << "ENter left node for : " << temp -> data << endl ;
        int leftData ;
        cin >> leftData ;

        if (leftData != -1) {
            temp -> left = new node(leftData) ;
            q.push(temp -> left) ;
        }

        cout << "ENter right node for : " << temp -> data << endl ;
        int rightData ;
        cin >> rightData ;

        if (rightData != -1) {
            temp -> right = new node(rightData) ;
            q.push(temp -> right) ;
        }
    }
}

int main()
{

    node *root = NULL;
    BuildFromLevelOrder(root) ;

/*
    // creating a node
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    cout << "Printing the level order traversal output " << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal " << endl;
    inorder(root);
    cout << endl;

    cout << "preorder traversal " << endl;
    preorder(root);
    cout << endl;

    cout << "postorder traversal " << endl;
    postorder(root);
    cout << endl;

*/
