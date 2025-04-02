#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){ // pass by reference

    //base case
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    // Recursive relation
     reverse(str, i, j);
    

}

int main(){

    string name = "babbar";
    int size = name.length() - 1;
    reverse(name, 0,  size);

    cout << name << endl;

}