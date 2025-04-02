// CODESTUDIO - SUBSEQUENCES

#include<iostream>
using namespace std ;

void solve(string str , int index , string output , vector<string>& ans){

    // base case
    if(index >= str.length()){
        if(output.length() > 0){
            ans.push_back(output) ;
        }
        return ;
    }

    // exclude
    solve(str , index+1 , output , ans) ;

    // include
    char element = str[index];
    output.push_back(element);
    solve(str , index+1 ,  output , ans) ;

}

vector<string> subsequences(string str){

    vector<string> ans ;
    string output = " " ;
    int index = 0 ;
    solve(str , index , output , ans) ;
    return ans ;
}