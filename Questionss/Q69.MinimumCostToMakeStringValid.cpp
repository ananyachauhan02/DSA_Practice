// Minimum Cost To Make String Valid - CODESTUDIO

int findMinimumCost(string str) {

    stack<char>st;

    if (str.length() % 2 == 1) {
        return -1 ;
    }

    for (int i = 0 ; i < str.length() ; i++ ) {
        char ch = str[i] ;

        if (ch == '{') {
            s.push(ch) ;
        }

        else {

            if (!s.empty() && s.top() == '{') {
                s.pop() ;
            }
            else {
                s.push(ch) ;
            }


        }
    }

    int a = 0 , b = 0 ;
    while (!s.empty()) {
        if (s.top() == '{') {
            b++ ;
        }
        else {
            a++ ;
        }
        s.pop() ;
    }
    int ans = (a+1)/2 + (b+1)/2 ;

    return ans ;

}