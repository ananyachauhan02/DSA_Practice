// Merge two BST's - codestudio

// approach - 1 
// TC- O(m+n) , SC - O(m+n)

void inorder(Node* root , vector<int> &v) {

    // base case
    if (root == NULL) {
        return ;
    }

    inorder(root -> left , v) ;
    v.push_back(root -> data) ;
    inorder(root -> right , v) ;

}

vector<int> merge(vector<int> &a , vector<int> &b) {

    vector<int> ans(a.size() + b.size()) ;
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            ans[k++] = a[i] ;
            i++ ;
        }
        else {
            ans[k++] = b[j] ;
            j++ ;
        }
    }

    while (i < a.size() - 1) {
        ans[k++] = a[i] ;
        i++ ;
    }

    while (j < b.size() - 1) {
        ans[k++] = b[j] ;
        j++ ;
    }

    return ans ;

}

Node* inorderBST(vector<int> &v , int s , int e) {

    // base case
    if (s > e) {
        return NULL ;
    }

    int mid = (s+e)/2 ;

    Node* root = new Node(v[mid]) ;

    root -> left = inorderBST(v , s , mid - 1) ;
    root -> right = inorderBST(v , mid + 1 , e) ;

    return root ;
}

Node* mergeBST(Node* root1 , Node* root2) {

    vector<int> v1 ;
    vector<int> v2 ;

    inorder(root1 , v1) ;
    inorder(root2 , v2) ;

    vector<int> res = merge(v1 , v2) ;

    int s = 0 ;
    int e = res.size() - 1 ;


    return inorderBST(res , s , e) ;
}

// approach - 2
// TC - O(n) , SC - O(h1 + h2)

void convertBSTintoDLL(Node* root , Node* &head) {

    if (root == NULL) {
        return ;
    }

    Node* right = convertBSTintoDLL(root -> right , head) ;
    root -> right = head ;

    if (head != NULL) {
        head -> left = root ;
    }

    head = root ;

    root -> left = convertBSTintoDLL(root -> left , head) ;

}

Node* mergeDLL(Node* h1 , Node* h2) {

    Node* head = NULL ;
    Node* tail = NULL ;

    while (h1 != NULL && h2 != NULL) {
        if (h1 -> data < h2 -> data) {
            if (head == NULL) {
                head = h1 ;
                tail = h1 ;
                h1 = h1 -> right ;
            }
            else {
               tail -> right = h1 ;
               h1 -> left = head ;
               tail = h1 ;
               h1 = h1 -> right ;
            }
        }
        else {
            if (head == NULL) {
                head = h2 ;
                tail = h2 ;
                h2 = h2 -> right ;
            }
            else {
                tail -> right = h2 ;
                h2 -> left = head ;
                tail = h2 ;
                h2 = h2 -> right ;
            }
        }
    }

    while (h1 != NULL) {
        tail -> right = h1 ;
        h1 -> left = head ;
        tail = h1 ;
        h1 = h1 -> right ;
    }

    while (h2 != NULL) {
        tail -> right = h2 ;
        h2 -> left = head ;
        tail = h2 ;
        h2 = h2 -> right ;
    }

    return head ;
}

int count(Node* root) {
    int cnt = 0 ;
    while (root != NULL) {
        cnt++ ;
        root = root -> right ;
    }

    return cnt ;
}

Node* sortedDLLintoBST(Node* &root , int n) {

    // base case
    if (n == 0 || head == NULL) {
        return NULL ;
    }

    Node* leftPart = sortedDLLintoBST(root -> left , n/2) ;
    Node* root = head ;
    root -> left = leftPart ;

    head = head -> right ;
    head -> right = sortedDLLintoBST(root -> right , n - n/2 - 1) ;

    return head ;
}

Node* mergeBST(Node* root1 , Node* root2) {

    Node* h1 = NULL ;
    Node* h2 = NULL ;

    convertBSTintoDLL(root1 , h1) ;
    h1 -> left = NULL ;
    convertBSTintoDLL(root2 , h2) ;
    h2 -> left = NULL ;

    Node* head = mergeDLL(h1 , h2) ;

    int n = count(head) ;

    return sortedDLLintoBST(head , n) ;

}




