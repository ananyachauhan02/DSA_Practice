reverse a string 

reverse(i , j , str) {

    if (i > j) {
        return ;
    }

    swap(str[i] , str[j]) ;
    i++ ;
    j-- ;
    reverse(i , j , str) ;
}



string reverse(string abc) {

    int len = abc.length() ;
    i = 0 ;
    j = n-1 ;

    string ans = reverse(i , j , abc) ;
    return ans;
}




# check pallindrome
bool check(string str , i , j) {

    if (i > j) {
        return true ;
    }

    if (str[i] != str[j]) {
        return false ;
    }
    else {
        check(str , i++ , j--) ;
    }
}

# exponent

int pow(int a , int b) {
    if (b == 0) {
        return 1 ;
    }

    if (b == 1) {
        return a ;
    }

    int ans = pow(a , b/2) ;
    if (b % 2 == 0) {
        return ans * ans ;
    }
    else {
        return a * ans * ans ;
    }
}

# count of zeroes and ones in an array

vector<int> solve (int arr[]) {


    int zero = 0 ;
    int one = 0 ;

    for (int i = 0 ; i < arr.length() ; i++) {
        if arr[i] == 0 {
            zero ++ ;
        }
        else {
            one++ ;
        }
    }

    vector<int> ans ;
    ans.push_back(zero);
    ans.push_back(one);
}


# minimum number in an array

    int solve(int arr[], int n) {

        int maxi = INT_MAX ;

        for (int i = 0 ; i < n ; i++) {
            maxi = min(arr[i] , maxi) ;
        }

        return maxi ;
    }


# reverse an array
    void reverse(int arr[] , int n) {

        int s = 0 ;
        int e = n-1 ;

        while (s <= e) {
            swap(arr[s] , arr[e]) ;
            s++ ;
            e-- ;
        }
    }


# binary search

    int binarySearch(int arr[], int n, int k) {
        int s = 0 , e = n ;

        while (s <= e) {

            int mid = (s+e)/2 ;
            if (arr[mid] == key) {
                return mid ;
            }
            else if (arr[mid] < key) {
                s = mid + 1 ;
            }
            else {
                e = mid - 1 ;
            }


            mid = (s+e)/2 ;
        }

        return -1 ;
    }



# first occurence

    int solve(int arr[] , int n , int k) {
        int s = 0 ;
        int e = n-1 ;
        int ans = 0 ;

        while (s <= e) {
            int mid = (s+e)/2 ;

            if (arr[mid] == k) {
                ans = mid ;
                e = mid - 1 ;
            }
            else if (arr[mid] < key) {
                s = mid + 1 ;
            }
            else {
                e = mid - 1;
            }
        }

        return ans ;
    }


# duplicate number

    int solve (int arr[] , int n) {
        int s = 0 ;
        int e = n-1 ;

        int ans = 0 ;

        while (s <= e) {
            int mid = (s+e)/2 ;

            if (arr[mid] =)


        }
    }





class node{
    int data;
    node* left;
    node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL:
        this -> right = NULL;
    }

};


node* buildTree(node* root) {

    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    root->left = buildTree(root->left);
    root->right = buildTree(root-> right);

    return root;



}

int main() {
    node* root = NULL;

    root = buildTree(root);
}