#include <bits/stdc++.h>
using namespace std;

// Initialising a node
class node{
     int data;
     node* left;
     node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

// constructing tree using recusrion
node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter the data for inserting in left" << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter the data for inserting in right" << endl;
    root -> right = buildTree(root -> right);
}


// constructing tree using level order traversal
void buildTree(node* root) {
    queue<node*> q;
    cout << "enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "enter data for left of " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "enter data for right of " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
}

// Level Order Traversal
void levelOrderTraversal(node* root) {
    queue<node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << " ";
            if (temp -> left) {
                q.push(temp -> left);
            }

            if (temp -> right) {
                q.push(temp -> right);
            }
        }
    }

}

// Inorder Traversal
void inorder(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root -> data << " ";
    inorder(root -> right);
}

// Preorder Traversal
void preorder(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

// Postorder Traversal
void postorder(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


// Q1. Count leaf nodes
void inorder(node* root, int &count) {
    // base case
    if (root == NULL) {
        return;
    }

    inorder(root->left, count);
    if (root->left == NULL && root->right == NULL) {
        count++;
    }
    inorder(root->right, count);
}

int countLeafNodes(node* root) {
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}
 

// Q2. Height of Binary Tree - TC : O(n)
int Height (node* root) {

    if (root == NULL) {
        return 0;
    }
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);

    int ans = max(leftHeight,rightHeight) + 1;
    return ans;
}


// Q3. Diameter of Binary Tree 
    // approach 1 - TC : O(n^2)
int Diameter(node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftDiameter = Diameter(root->left);
    int rightDiameter = Diameter(root->right);
    int comboDiameter = height(root->left)+height(root->right)+1;

    int ans = max(max(leftDiameter,rightDiameter),comboDiameter);
    return ans;
}

    // approach 2 - TC : O(n)
pair<int,int> DiameterFast(node* root) {
    if (root == NULL) {
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = DiameterFast(root->left);
    pair<int,int> right = DiameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int,int> ans;
    ans.first = max(op1, max(op2,op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int Diameter(node* root) {
    return DiameterFast(root).first;
}


// Q4. Check for balanced tree
    // approach 1 - TC : O(n^2)
    bool isBalanced(node* root) {
        if (root == NULL) {
            return true
        }

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool ans = abs(Height(root->left)-Height(root->right)) <= 1

        if (left && right && ans){
            return true;
        }
        else {
            return false
        }
    }

    //approach 2 - TC : O(n)
    pair<bool,int> BalancedFast(node* root) {
        if (root == NULL) {
            pair<bool,int> p = make_pair(true, 0);
        }

        pair<bool,int> leftTree = BalancedFast(root->left);
        pair<bool,int> rightTree = BalancedFast(root->right);

        bool leftAns = leftTree.first;
        bool rightAns = rightTree.first;

        int height1 = leftTree.second;
        int height2 = rightTree.second;

        bool diff = abs(lheight1 - height2) <= 1;

        pair<bool,int> ans;
        ans.second = max(height1, height2) + 1;

        if (leftAns && rightAns && diff) {
            ans.first = true;
        }
        else {
            ans.first = false;
        }
        return ans;

    }

    bool isBalanced(Node* root) {
        return BalancedFast(root).first;
    }


// Q5. Check if  Indentical Trees - TC : O(n)
bool identicalTrees(node* r1, node* r2) {
    // base cases
    if (r1 == NULL && r2 == NULL) {
        return true;
    }
    if (r1 == NULL && r2 != NULL) {
        return false;
    }
    if (r1 != NULL && r2 == NULL) {
        return false;
    }

    bool leftTree = identicalTrees(r1->left, r2->left);
    bool rightTree = identicalTrees(r1->right, r2->right);
    bool value = r1->data == r2->data;

    if (leftTree && rightTree && value) {
        return true;
    }
    else {
        return false;
    }
}


// Q6.Is Sum tree - TC:O(n)
pair<bool,int> isSumTree(node* root) {
    if (root == NULL) {
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    if (root->left == NULL && root->right == NULL) {
        pair<bool,int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool,int> leftTree = isSumTree(root->left);
    pair<bool,int> rightTree = isSumTree(root->right);

    bool isLeftSumTree = leftTree.first;
    bool isRightSumTree = rightTree.first;

    int leftSum = leftTree.secondl;
    int rightSum = rightTree.second;

    bool condn = root->data == leftSum + rightSum;

    pair<bool,int> ans;

    if (isLeftSumTree && isRightSumTree && condn) {
        ans.first = true;
        ans.second = root->data + leftSum + rightSum;
    }

    else {
        return false;
    }

}

bool isSum(node* root) {
    return isSumTree(root).first;
}


// Q7. Zig Zag Traversal - TC : O(n)
vector<int> zigzag(Node* root) {
    vector<int> result;

    if (root == NULL) {
        return result;
    }
    queue<node*> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty()){
        int size = q.size();
        vector<int> ans(size);

        // level process
        for (int i = 0 ; i < size; i++) {
            Node* temp = q.front();
            q.pop();
            // normal insert or reverse insert
            int index = leftToRight ? i : size - i - 1;
            ans[index] = temp->data;

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }

            leftToRight != leftToRight;

            for (auto i : ans) {
                result.push_back(i);
            }
        }
        return result;
    }
}

    // approach - 2

vector<int> zigzag(node* root) {
    queue<node*> q;
    q.push(root);
    vector<int> ans;
    int level = 0;

    while (!q.empty()) {
        vector<int> temp;
        int size = q.size();
        level++;

        for (int i = 0 ; i < size ; i++) {
            node* curr = q.front();
            q.pop();

            if (curr->left) {
                q.push(curr->left);
            }
            if (curr->right) {
                q.push(curr->right);
            }
            temp.push_back(curr->data);
        }

        if (level % 2 != 0) {
            for (auto i : temp) {
                ans.push_back(i);
            }
        }
        else {
            for (int i = temp.size()-1 ; i >= 0 ; i--) {
                ans.push_back(temp[i]);
            }
        }
    }

    return ans;
}


// Q8. Boundary Traversal
void leftTraversal(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        return;
    }

    ans.push_back(root->data);
    if (root->left) {
        leftTraversal(root->left, ans);
    }
    else {
        leftTraversal(root->right, ans);
    }
}

void leafNodes(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }

    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
    }
    leafNodes(root->left, ans);
    leafNodes(root->right, ans);
}

void rightTraversal(node* root, vector<int> &ans) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root ->right == NULL) {
        return;
    }

    if (root->right) {
        rightTraversal(root->right, ans);
    }
    else {
        rightTraversal(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> boundaryTraversal(node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }
    ans.push_back(root);

    leftTraversal(root->left, ans);
    leafNodes(root->left, ans);
    leafNodes(root->right, ans);
    rightTraversal(root->right, ans);

    return ans;
}



// Q9. Vertical Traversal
vector<vector<int>> verticalTraversal(node*root) {

    vector<vector<int>> ans;
    map <int, map<int, vector<int>>> mp;
    queue<pair<node*, pair<int, int>>> q;

    if (root == NULL) {
        return ans;
    }

    q.push(make_pair(root, make_pair(0,0)));

    while(!q.empty()) {
        pair<node*, pair<int, int> tmp = q.front();
        q.pop();

        node* frontNode = tmp.first;
        int hd = tmp.second.first;
        int lvl = tmp.second.second;

        mp[hd][lvl].push_back(frontNode->data);

        if (frontNode->left) {
            q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
        }
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }
    }
    for (auto i : mp) {
        vector<int> v;
        for (auto j : i.second) {
            sort(j.second.begin(), j.second.end()) 
            for (auto k : j.second) {
                v.push_back(k)
            }
        }
        ans.push_back(v);
    }

    return ans;
}



// Q10. Top View of Binary Tree
vector<int> TopView(node* root) {

    vector<int> ans;
    map<int, int> mp;
    queue<pair<node*, int>> q;

    if (root == NULL) {
        return ans;
    }

    q.push(make_pair(root, 0));

    while (!q.empty()) {
        pair<node*, int> temp = q.front();
        q.pop();

        node* frontNode = temp.first;
        int hd = temp.second;

        if (mp.find(hd) == mp.end()) {
            mp[hd] = topNode->data;
        }
        if (topNode->left) {
            q.push(make_pair(topNode->left, hd-1));
        }
        if (topNode->right) {
            q.push(make_pair(topNode->right, hd+1));
        }
    }

    for (auto i : mp) {
        as.push_back(i.second);
    }
    return ans;
}


// Q11. Bottom View Of Binary Tree
vector<int> BinaryView(node* root) {
    vector<int> ans;
    map<int, int> mp;
    queue<pair<node*, int>> q;

    if (root == NULL) {
        return ans;
    }

    q.push(make_pair(root, 0));

    while (!q.empty()) {
        pair<node*, int> temp = q.front();
        q.pop();

        node* topNode = temp.first;
        int data = temp.second;

        mp[hd] = topNode->data;

        if (topNode->left) {
            q.push(make_pair(topNode->left, hd-1));
        }

        if (topNode->right) {
            q.push(make_pair(topNode->right, hd+1));
        }
    }

    for (auto i : mp) {
        ans.push_back(i.second);
    }

    return ans;
}


// Q12. Left View of Binary tree
void solve(node* root, vector<int> &ans, int lvl) {
    if (root == NULL) {
        return ;
    }

    if (lvl == ans.size()) {
        ans.push_back(root->data);
    }
    solve(root->left, ans, lvl+1);
    solve(root->right, ans, lvl+1);
}

vector<int> leftView(node* root) {
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}

// Q13. Right View OF Binary Tree
void solve(node* root, vector<int> &ans, int lvl) {
    if (root == NULL) {
        return;
    }

    if (lvl == ans.size()) {
        ans.push_back(root->data);
    }
    solve(root->right, ans, lvl+1);
    solve(root->left, ans, lvl+1);
}

vector<int>rightView(node* root) {
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}


// Q14. Sum of Nodes on the Longest Path
void solve(node* root, int len, int &maxlen, int sum, int &maxsum) {
    if (root == NULL) {
        if (len > maxlen) {
            maxlen = len;
            maxsum = sum;
        }
        else if (len == maxlen) {
            maxsum = max(maxsum, sum);
        }
        return;
    }
    sum = sum + root->data;
    solve(root->left, len+1, maxlen, sum, maxsum);
    solve(root->right, len+1, maxlen, sum, maxsum);
}

int sumOfLongRootToLeafPath(Node* root) {
    int len = 0;
    int sum = 0;
    int maxlen = 0;
    int maxsum = 0;
    solve(root, len, maxlen, sum, maxsum);

    return maxsum;
}


// Q15. Lowest Common Ancestory
node* lca(node* root, int n1, int n2) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == n1 || root->data == n2) {
        return root;
    }
    node* leftAns = lca(root->left, n1, n2);
    node* rightAns = lca(root->right, n1, n2);

    if (leftAns != NULL && rightAns != NULL) {
        return root;
    }
    else if (leftAns != NULL && rightAns == NULL) {
        return leftAns;
    }
    else if (leftAns == NULL && rightAns != NULL) {
        return rightAns;
    }
    else {
        return NULL;
    }
}


// Q16. K sum paths
void solve(node* root, int k, int & cnt, vector<int> &path) {
    if (root == NULL) {
        return;
    }
    path.push_back(root->data);

    solve(root->left, k, cnt, path);
    solve(root->right, k, cnt, path);

    int sum = 0;
    int size = path.size();
    for (int i = size-1; i >= 0; i--) {
        sum += path[i];
        if (sum == k) {
            cnt++;
        }
    }
    path.pop_back();
}

int sum(node* root, int k) {
    int cnt = 0;
    vector<int>path;
    solve(root, k, cnt, path);
    return cnt;
}



// Q17. Kth ancestor in a tree
node* solve(node* root, int &k , int node) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == node) {
        return root;
    }

    node* leftAns = solve(root->left, k, node);
    node* rightAns = solve(root->right, k, node);

    if (leftAns != NULL && rightAns == NULL) {
        k--;
        if (k <= 0) {
            k = INT_MAX;
            return root;
        }
        else {
            return leftAns;
        }
    }

    if (rightAns != NULL && leftAns == NULL) {
        k--;
        if (k <= 0) {
            k = INT_MAX;
            return root;
        }
        else {
            return rightAns;
        }
    }

    return NULL;
}

int kthAncestor(node* root, int k , int node) {
    node* ans = solve(root, k, node);

    if (ans->data == node || ans == NULL) {
        return -1;
    }
    return ans->data; 
}


// Q18. Maximum sum of non-adjacent nodes
pair<int,int> solve(node* root) {
    if (root == NULL) {
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> leftAns = solve(root->left);
    pair<int,int> rightAns = solve(root->right);

    pair<int,int> ans;
    ans.first = root->data + leftAns.second + rightAns.second;
    ans.second = max(leftAns.first, leftAns.second) + max(rightAns.first, rightAns.second);

    return ans;
}

int getMaxSum(node* root) {
    pair<int,int>ans = solve(root);
    return max(ans.first, ans.second);
}



// Q19. Construct tree from inorder and preorder traversal
void createMappings(vector<int>& inorder, map<int,int> &mp, int n) {
    for(int i = 0 ; i < n ; i++) {
        mp[inorder[i]] = i;
    }
}

node* solve(vector<int> &inorder, vector<int> &preorder, int &index, int startInorder, int endInorder, map<int,int> &mp) {
    if (index > inorder.size() || startInorder > endInorder) {
        return NULL;
    }

    int element = preorder[index++];
    node* root = new node(element);
    int pos = mp[element];

    root -> left = solve(inorder, preorder, index, startInorder, pos-1, mp);
    root -> right = solve(inorder, preorder, index, pos+1, endInorder, mp);

    return root;
}

node* buildTree(vector<int> &inorder, vector<int> &preorder) {
    int preorderIndex = 0;
    map<int,int> mp;
    int n = inorder.size();
    createMappings(inorder, mp, m);
    node* ans = solve(inorder, preorder, preorderIndex, 0, n-1, mp);
    return ans;
}


// Q20. construct a tree from inorder and postorder 
void createMappings(vector<int>& inorder, map<int,int> &mp, int n) {
    for(int i = 0 ; i < n ; i++) {
        mp[inorder[i]] = i;
    }
}

node* solve(vector<int> &inorder, vector<int> &postorder, int &index, int startInorder, int endInorder, map<int,int> &mp) {
    if (index < 0 || startInorder > endInorder) {
        return NULL;
    }

    int element = postorder[index--];
    node* root = new node(element);
    int pos = mp[element];

    root -> right = solve(inorder, postorder, index, pos+1, endInorder, mp);
    root -> left = solve(inorder, postorder, index, startInorder, pos-1, mp);

    return root;
}

node* buildTree(vector<int> &inorder, vector<int> &postorder) {
    int postorderIndex = 0;
    map<int,int> mp;
    int n = inorder.size();
    createMappings(inorder, mp, m);
    node* ans = solve(inorder, postorder, postorderIndex, 0, n-1, mp);
    return ans;
}




// Q21. Burning Tree - TC : O(n), SC - O(n )
node* createMappings(node* root, map<node*,node*> &mp, int &target) {
    queue<node*> q;
    q.push(root);
    mp[root] = NULL;
    node* result = NULL;

    while (!q.empty()) {
        node* frontNode = q.front();
        q.pop();

        if (frontNode->data == target) {
            result = frontNode;
        }
        if (frontNode->left) {
            q.push(frontNode->left);
            mp[frontNode->left] = frontNode;
        }
        if (frontNode->right) {
            q.push(frontNode->right);
            mp[frontNode->right] = frontNode;
        }
    }

    return result;
}

int solve(node* root, map<node*,node*> &mp, int &time) {
    map<node*, bool> visited;
    queue<node*> q;
    q.push(root);
    visited[root]=1;

    while (!q.empty()) {
        bool flag = 0;
        int size = q.size();

        for (int i = 0; i < n; i++) {
            node* frontNode = q.front();
            q.pop();

            if (frontNode->left && !visited[frontNode->left]) {
                flag = 1;
                q.push(frontNode->left);
                visited[frontNode->left] = 1;
            }
            if (frontNode->right && !visited[frontNode->right]) {
                flag = 1;
                q.push(frontNode->right);
                visited[frontNode->right] = 1;
            }
            if (mp[frontNode] && !visited[mp[frontNode]]) {
                flag = 1;
                q.push(mp[frontNode]);
                visited[mp[frontNode]] = 1;
            }
        }
        if (flag == 1) {
            time++ ;
        }
    }
    return time;
}

int amountOfTime(node* root, int target) {
    map<node*, node*> mp;
    node* targetNode = createMappings(root, mp, target);
    int time = 0;
    int ans = solve(targetNode, mp, time);
    return ans;
}


// Q22. Morris Traversal
vector<int> morrisTraversal(node* root) {
    vector<int> ans;
    node* curr = root;

    while (curr != NULL) {
        if (curr->left == NULL) {
            // if no left child, store this node and go right
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else {
            // find inorder predecessor of curr
            node* pred = curr->left;
            while (pred->right != NULL && pred->right != curr) {
                pred = pred->right;
            }

            // make curr as right child of its predecessor
            if (pred->right == NULL) {
                pred->right = curr;
                curr = curr->left;
            }
            else {

            // revert the changes made in the tree
                pred->right = NULL;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }

        return ans;
    }
}



// Q23. Flatten binary tree into linked list
void flatten(node* root) {
    node* curr = root;

    while (curr != NULL) {
        if (curr->left == NULL) {
            curr = curr->right;
        }
        else {
            node* pred = curr->left;
            while (pred->right != NULL) {
                pred = pred->right;
            }
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
    }
}