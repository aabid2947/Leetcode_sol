#include <vector>


vector<vector<char>> board = [[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".","R",".",".",".","p"],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."]];

class Solution {
public:
    int numRookCaptures() {

        int rook_row = 0, rook_col = 0, countR = 0,countC=0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                if (board[i][j] == 'R') {
                    rook_row = i;
                    rook_col = j;
                }
            }
        }
        for (int i = 0; i < board.size(); i++) {
            if (i == rook_col)
                continue;
             else if (board[rook_row ][i] == 'p' || board[rook_row][i] == 'B') {
             
                if (i > rook_col) {
                    if (board[rook_row][i] == 'p')
                        countR++;
                        std::cout<<countR;
                    break;
                } else {
                    if (board[rook_row][i] == 'p' && countR == 0)
                        countR++;
                    else if(board[rook_row][i] == 'B') countR=0;
                }
            }
        }
        for (int i = 0; i < board.size(); i++) {
            if (i == rook_row) continue;

            else if (board[i ][rook_col] == 'p' || board[i][rook_col] == 'B') {
                   std::cout<<board[i ][rook_col] <<i<<rook_row<<std::endl;
                if (i > rook_row) {
                    if (board[i][rook_col] == 'p')
                        countC++;
                    break;
                } else {
                    if (board[i][rook_col] == 'p' && countC == 0)
                        countC++;
                    else if(board[i][rook_col] == 'B') countC =0;
                }
            }
        }
        std::cout<<countC<<countR;
        return countC+countR;
    }
};