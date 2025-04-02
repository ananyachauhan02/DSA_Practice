// Quadratic Equation Roots - GFG , codestudio

pair<int , int> findRoots(int a, int b, int c) {

    double d = b*b - 4*a*c ;

    if (d < 0) {
        return {-1 , -1} ;

    }

    double r1 = (-b + sqrt(d)) / (2*a) ;
    double r2 = (-b - sqrt(d)) / (2*a) ;

    pair<int , int> ans = make_pair(floor(r1) , floor(r2)) ;

    return ans ;
}