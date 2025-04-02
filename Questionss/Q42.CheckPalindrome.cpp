#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    // base case
    if(i>j)
    return true;

    if(str[i] != str[j])
    return false;

    else{
        return checkPalindrome(str, i+1, j-1);
    }

}

int main(){

    string name = "abcde";

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome)
    cout << "Is a Palindrome!" << endl;
    else
    cout << "Not a Palindrome" << endl;


    return 0;
}