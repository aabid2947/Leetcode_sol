Problem 999: Available Captures for Rook
Problem Statement
    On an 8 x 8 chessboard, there is exactly one white rook 'R' and some number of white bishops 'B', black pawns 'p', and empty squares '.'.

    When the rook moves, it chooses one of four cardinal directions (north, east, south, or west), then moves in that direction until it chooses to stop,
    reaches the edge of the board, captures a black pawn, or is blocked by a white bishop. A rook is considered attacking a pawn if the rook can capture 
    the pawn on the rook's turn. The number of available captures for the white rook is the number of pawns that the rook is attacking.

Return the number of available captures for the white rook.

Example
Input:
    board = [[".",".",".",".",".",".",".","."],
            [".",".",".","p",".",".",".","."],
            [".",".",".","R",".",".",".","p"],
            [".",".",".",".",".",".",".","."],
            [".",".",".",".",".",".",".","."],
            [".",".",".","p",".",".",".","."],
            [".",".",".",".",".",".",".","."],
            [".",".",".",".",".",".",".","."]]
Output:
    3

Explanation: In this example, the rook is attacking all the pawns.

Approach
The solution iterates over the chessboard twice: first to find the position of the rook, and then to check for available captures
in the row and column where the rook is placed. It counts the number of pawns the rook can capture in each direction and returns the sum.

Time Complexity
The time complexity of the solution is O(N^2), where N is the size of the chessboard.

Space Complexity
The space complexity of the solution is O(1) since it only uses a constant amount of extra space for variables.