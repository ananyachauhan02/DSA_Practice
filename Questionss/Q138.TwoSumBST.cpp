// Two Sum in a BST - leetcode , codestudio

// approach - recursive 
// TC - O(n) , SC - O(h) 

void inorder(Node* root , vector<int> &v) {

    // base case
    if (root == NULL) {
        return ;
    }

    inorder(root -> left , v) ;
    v.push_back(root -> data) ;
    inorder(root -> right , v) ;
}

bool TwoSum(Node* root , int k) {

    vector<int> v ;
    inorder(root , v) ;

    int i = 0 ;
    int j = v.size() - 1 ;

    while (i < j) {
        int sum = v[i] + v[j] ;

        if (sum == k) {
            return true ;
        }
        else if (sum > k) {
            j-- ;
        }
        else {
            i++ ;
        }
    }

    return false ;
}