bool isRow(vector<vector<char>> &board, int row, int column, char num){
    for (int i=0; i < 9; i++){
        if (i == column) continue;
        if (board[row][i] == num) return false;
    }
    return true;
}

bool isColumn(vector<vector<char>> &board, int row, int column, char num){
    for (int i=0; i < 9; i++){
        if (i == row) continue;
        if (board[i][column] == num) return false;
    }
    return true;
}

bool isBox(vector<vector<char>> &board, int rowStart, int columnStart, int r, int c, char num){
    for( int row = 0; row < 3 ; row++){
        for (int column = 0; column < 3; column++){
            if((rowStart + row == r ) && (columnStart + column == c)) continue;
            if (board[rowStart + row][columnStart + column] == num) return false;
        }
    }
    return true;
}

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i < 9; i++){
            for (int j=0; j < 9; j++){
                char num = board[i][j];
                if ( num != '.'){
                    if ( !isRow(board, i, j, num) || !isColumn(board, i, j, num) || !isBox(board, i - i%3 , j - j%3, i, j, num)){
                    return false;
                    }
                }
            }
        }   
    return true;
    }
};
