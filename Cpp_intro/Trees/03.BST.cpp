#include<bits/stdc++.h>
using namespace std ;

class Node {

    public :
        int data ;
        Node* left ;
        Node* right ;

    Node(int d) {
        this -> data = d ;
        this -> left = NULL ;
        this -> right = NULL ;
    }


} ;

Node* insertintoBST(Node* root , int d) {
    // base case
    if (root == NULL) {
        root = new Node(d) ;
        return root ;
    }

    if (d > root -> data) {
        // right part me insert karna hai
        root -> right = insertintoBST(root -> right , d) ;
    }
    else {
        // left part me insert karna hai
        root -> left = insertintoBST(root -> left , d) ;
    }

    return root ;
} 

Node* MaxValue(Node* root) {

    Node* temp = root ;

    while (temp -> right != NULL) {
        temp = temp -> right ;
    }
    return temp ;

}

Node* MinValue(Node* root) {

    Node* temp = root ;

    while (temp -> left) {
        temp = temp -> left ;
    }
    return temp ;
}


void takeInput(Node* &root) {

    int data ;
    cin >> data ;

    while (data != -1) {
        root = insertintoBST(root , data)  ;
        cin >> data ;  
    }
}


// INORDER TRAVERSAL
void inorder(Node *root)
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

Node* deleteFromBST(Node* root , int val) {

    // base case
    if (root == NULL) {
        return root ;
    }

    if (root -> data == val) {
        // 0 child
        if (root -> left == NULL && root -> right == NULL)
        {
            delete root ;
            return NULL ;
        }

        // 1 child 
            // left child
            if (root -> left != NULL && root -> right == NULL) {
                Node* temp = root -> left ;
                delete root ;
                return temp ;
            }

            // right child
            if (root -> left == NULL && root -> right != NULL) {
                Node* temp = root -> right ;
                delete root ;
                return temp ;
            }


        // 2 child
        if (root -> left != NULL && root -> right != NULL) {
            int mini = minValue(root -> right) -> data ;
            root -> data = mini ;
            root -> right = deleteFromBST(root -> right , mini) ;
            return root ;
        }
    }

    else if (root -> data > val) {
        // left part mai jao
        root -> left = deleteFromBST(root -> left , val) ;
        return root ;
    }

    else {
        // right part mai jao
        root -> right = deleteFromBST(root -> right , val) ;
        return root ;
    }


}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // seperator

    while (!q.empty())
    {
        Node *temp = q.front();
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

int main() {

    Node* root = NULL ;

    cout << "Enter data to create BST " << endl ;
    takeInput(root) ;

    cout << "printing the bst "  << endl ;
    levelOrderTraversal(root) ;

    cout << endl << "Inorder is " << endl ;
    inorder(root) ;

    cout << endl ;
    cout << "maximum value is " << MaxValue(root) -> data << endl ;
    cout << "minimum value is " << MinValue(root) -> data << endl ;

    return 0 ;
    // 50 20 70 10 30 90 110 -1
}