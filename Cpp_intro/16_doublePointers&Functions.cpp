#include<iostream>
using namespace std;

void update(**p){

   // p2 = p2 + 1; --> gives no change

  // *p2 = *p2 + 1; --> value of p changes

   **p2 = **p2 + 1; --> value of i changes


}

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "before" << i << endl;
    cout << "before" << p << endl;
    cout << "before" << p2 << endl;

    update (p2);

    cout << "after" << i << endl;
    cout << "after" << p << endl;
    cout << "after" << p2 << endl;




    return 0;
}