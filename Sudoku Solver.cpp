class Solution {
public:
bool solve(vector<vector<char>>& board){
    for (int i=0; i< 9; i++){
        for (int j=0 ; j< 9; j++){
            if (board[i][j] == '.'){
                for (char c = '1'; c<='9'; c++){
                    if (isValid(board,i ,j ,c)){
                        board[i][j] = c;

                        if (solve(board) == true){
                            return true;
                        }
                        else
                            board[i][j] = '.'; 
                    }
                }

                return false;
            }
        }
    }

    return true;
}

bool isValid(vector<vector<char>> &board,int row, int column, int num){
    int rowStart = row - row%3;
    int colStart = column - column%3;
    for (int i = 0; i < 9; i++){ 
        if ( board[row][i] == num && i != column ) return false; //row check
        if ( board[i][column] == num && i != row ) return false; //column check
    }
    for (int i = 0; i< 3; i++){
        for (int j = 0; j < 3; j++){
            if ( (board[rowStart + i ][colStart + j ]) == num && ((rowStart + i != row ) && (colStart + j != column))){
                return false;
            }
        }
    }
    return true;
}

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
