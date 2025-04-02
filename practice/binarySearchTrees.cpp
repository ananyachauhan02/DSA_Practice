#include<bits/stdc++.h>
using namespace std;

// Initialising a node for BST
class node {

    public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL:
        this->right = NULL:
    }
};

// inserting data into BST
Node* insertData(node* root, int d) {
    if (root == NULL) {
        root = new node(d);
        return root;
    }

    if (d > root -> data) {
        root->right = insertData(root->right, d);
    }

    if (d < root->data) {
        root->left = insertData(root->left, d);
    }
}

// constructing tree using level order traversal
void levelOrderTraversal(node* root, vector<int> &ans) {

    if (root == NULL) {
        return;
    }
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* frontNode = q.front();
        q.pop();

        ans.push_back(frontNode->data);

        if (frontNode->left) {
            q.push(frontNode->left);
        }

        if (frontNode->right) {
            q.push(frontNode->right);
        }
    }
}


// inorder traversal
void inorderTraversal(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left, ans);
    ans.push_back(root->data);
    inorderTraversal(root->right, ans);

}

// preorder traversal
void preorderTraversal(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }

    ans.push_back(root->data);  
    preorderTraversal(root->left, ans);
    preorderTraversal(root->right, ans);
}

// postorder traversal
void postorderTraversal(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }

    postorderTraversal(root->left, ans);
    postorderTraversal(root->right, ans);
    ans.push_back(root->data);  
}

// max value in a BST
node* maxValue(node* root) {
    if (root == NULL) {
        return NULL;
    }
    node* temp = root;
    while (temp->right != NULL) {
        temp = temp ->right;
    }
    return temp;
}

// min value in a BST
node* minValue(node* root) {
    if (root == NULL) {
        return NULL;
    }
    node* temp = root;
    while (temp->left != NULL) {
        temp = temp ->left;
    }
    return temp;
}


// Delete node form BST
Node* deleteNodeBST(node* root, int x) {
    // base case
    if (root == NULL) {
        return NULL;
    }

    if (root->data == x) {
        // 0 child
        if (root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if (root->left != NULL && root->right == NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->left != NULL && root->right != NULL) {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteNodeBST(root->right, mini);
            return root;
        }
    }

    else if (root->data > x) {
        root->left = deleteNodeBST(root->left, x);
        return root;
    }
    else {
        root->right = deleteNodeBST(root->right, x);
        return root;
    }

}


// Q1. Search a node in BST
bool searchNode(node* root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x) {
        return true;
    }

    if (root->data > x) {
        return searchNode(root->left, x);
    }
    else {
        return search(root->right, x);
    }
}

// Q2. Validate Binary Search Tree
bool solve(node* root, node* mini, node* maxi) {
    if (root == NULL) {
        return NULL;
    }

    if ((mini != NULL && root->data <= mini->data) || (maxi != NULL && root->data >= maxi->data)) {
        return false;
    }
    else {
        bool leftAns = solve(root->left, mini, root);
        bool rightAns = solve(root->right, maxi, root);
        return leftAns && rightAns;
    }
}

bool validBST(node* root) {
    return solve(root, NULL, NULL);
}


// Q3. Kth smallest element in BST
void solve(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }

    solve(root->left, ans);
    ans.push_back(root->data);
    solve(root->right, ans);
}

int kthSmallest(node* root, int k) {
    vector<int> ans;
    solve(root, ans);
    if (k < ans.size()) {
        return ans[k-1];
    }
    else {
        return -1;
    }
}


// Q4. Successor And Predecessor
void findPreSuc(node* root, node* pre, node* succ, int key) {
    node* temp = root;
    while (temp != NULL) {
        if (temp->data <= key) {
            temp = temp -> right;
        }
        else {
            succ = temp;
            temp = temp -> left;
        }
    }
    temp = root;
    while (temp != NULL) {
        if (temp -> data >= key) {
            temp = temp -> left;
        }
        else {
            pre = temp;
            temp = temp -> right;
        }
    }
}


//Q5. LCA in a BST
node* lca(node* root, node* p, node* q) {
    while (root != NULL) {
        if (root->data < p->data && root->data < q->data) {
            root = root->right;
        }
        if (root->data > p->data && root->data > q->data) {
            root = root->left;
        } else {
            return root;
        }
    }
    return root;
}


// Q6. Two sum in a BST
void inorder(node* root, vector<int> &v) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

bool twoSum(node* root, int target) {
    vector<int> v;
    inorder(root, v);
    int i = 0;
    int j = v.size()-1;
    while (i<j){
        int sum = v[i]+v[j];
        if (sum == target) {
            return true;
        }
        else if(sum > target) {
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}


// Q7. Normal BST to Balanced BST
void inorder(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}

node* conversion(int s, int e, vector<int> &ans){
    if (s>e) {
        return NULL;
    }
    int mid = (s+e)/2;
    node* root = new Node(ans[mid]);
    root->left = conversion(0, mid-1, ans);
    root->right = conversion(mid+1, e, ans);
}

node* balanceBST(node* root) {
    vector<int> ans;
    inorder(root, ans);
    return conversion(0, ans.size()-1, ans);
}


// Q8. BST from preorder traversal
node* solve(int pre[], int maxi, int mini, int &i, int size) {
    if (i >= size) {
        return NULL;
    }
    if (pre[i] < mini || pre[i] > maxi) {
        return NULL;
    }

    node* root = new node(pre[i]);
    i++;

    root->left = solve(pre, maxi, root->data, i, size);
    root->right = solve(pre, root->data, mini, i, size);
}

Node* bst(int pre[], int size) {
    int i = 0;
    return solve(pre, INT_MAX, INT_MIN, i, size);
}



// Q9. Merge 2 BST's
void inorder(node* root, vector<int> &v) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

vector<int> mergeVector(vector<int> &a, vector<int> &b) {
    
    vector<int> c(a.size()+b.size());

    int i = 0, j = 0;
    int k = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] >= b[j]) {
            c[k] = b[j];
            j++;
            k++;
        }
        else {
            c[k] = a[i];
            k++;
            i++;
        }
    } 
    while(i < a.size()) {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < b.size()) {
        c[k] = b[j];
        k++;
        j++;
    }
    return c;
}

node* inorderToBST(vector<int> &v, int s, int e) {
    if (s>e) {
        return;
    }
    if (v[0] == 0) {
        return;
    }
    int s = 0;
    int e = v.size()-1;
    int mid = (s+e)/2;
    
    node* root = new node(v[mid]);
    root->left = inorderToBST(v, s, mid-1);
    root->right = inorderToBST(v, mid+1, e);
    return root;
}

node* mergetrees(node* root1, node* root2) {
    vector<int> a;
    vector<int> b;
    inorder(r1, a);
    inorder(r2, b);
    vector<int> mergedVector = mergeVector(a, b);
    return inorderToBST(mergedVector, 0, mergedVector.size());
}


    // Approach 2 - using LL
void converToLL(node* root) {
    node* curr = root;

    while (curr != NULL) {
        if (curr->left == NULL) {
            curr = curr->right;
        }
        else {
            node* pred = curr->left;
            while (curr->right != NULL) {
                curr = curr->right;
            }
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
    }
}

node* mergeLL(node* root1, node* root2) {
    node* curr1 = root1;
    node* curr2 = root2;

    while (curr1->right != NULL && curr2->right != NULL) {
        if (curr1->data >= curr2->data) {
            curr2 = curr2 -> right;
        }
        else {
            node* root
        }
    }
}

node* convertLLToBST() {

}










// Q10. Largest BST

struct info{
    int maxi;
    int mini;
    bool isBST;
    int size;

    info(int minV, int maxV, bool isB, int s){
        mini = minV;
        maxi = maxV;
        isBST = isB;
        size = s;
    }
};

info solve(node* root, ans) {
    if (root == NULL) {
        return {INT_MIN,INT_MAX,true,0};
    }

    info leftTree = solve(root->left, ans);
    info rightTree = solve(root->right, ans);

    info currNode(min(root->data,leftTree.mini), max(root->data,rightTree.maxi), 
                        false, leftTree.size + rightTree.size + 1);
    
    if (leftTree.isBST && rightTree.isBST && (root->data > left.maxi) && (root->data < right.mini)) {
        currNode.isBST = true;
        ans = max(currNode.size, ans);
    }
    return currNode;
}

int largestBST(node* root) {
    int maxSize = 0;
    solve(root, maxSize);
    return maxSize;
}