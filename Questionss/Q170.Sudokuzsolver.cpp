// Sudoku solver  - codestudio

#include <bits/stdc++.h> 

bool isSafe(int row , int col , vector<vector<int>>& board , int value) {

    for (int i = 0 ; i < board.size() ; i++) {
        // row check
        if (board[row][i] == value) {
            return false ;
        }
        // col check
        if (board[i][col] == value) {
            return false ;
        }
        // 3*3 matix check
        if (board[3*(row/3) + i/3][3*(col/3) + i%3] == value) 
        {
            return false ;
        }

        
    }
    return true ;
}


bool solve(vector<vector<int>>& board) {

    int n = board[0].size() ;

    for (int row= 0 ; row < n ; row++) {
        for (int col = 0 ; col < n ; col++) {
            // cell empty
            if (board[row][col]== 0) {
                for (int val = 1 ; val <= 9 ; val++) {
                    if (isSafe(row , col , board , val)) {
                        board[row][col] = val ;

                        // recursive call
                        bool isNextSolPossible = solve(board) ;
                        if (isNextSolPossible) {
                            return true ;
                        }
                        else {
                            // backtrack
                            board[row][col] = 0 ;
                        }
                    }
                }
                return false ;
            }
        }
    }

    return true ;

}

void solveSudoku(vector<vector<int>>& sudoku)
{
	solve(sudoku) ;
}