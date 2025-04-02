// Possible words from phone diary - gfg


void mainFunc(int a[] , int n , vector<string>&ans , string prev , unordered_map<int , string>st , int l) {


    if (prev.size() == n) {
        ans.push_back(prev) ;
    }

    int digit = a[l] ;
    int len = st[digit].size() ;

    for (int i = 0  ; i < len ; i++) {
        mainFunc(a , n , ans , prev+st[digit][i] , st , l+1) ;
    }

}

vector<string>possibleWords(int a[] , int n) {


    unordered_map<int , string> st = {
        {0 , ""} , {1 , ""} , {2 , "abc"} , {3 , "def"} ,
        {4 , "ghi"} , {5 , "jkl"} , {6 , "mno"} , {7 , "pqrs"} ,
        {8 , "tuv"} , {9 , "wxyz"} 
    } ;

    vector<string>ans ;
    mainFunc(a , n , ans , "" , st , 0) ;

    return ans ;
}