#include <iostream>
#include <vector>
using namespace std;

void display_board(vector<vector<char>> board) {
    for (vector<char> i : board) {
        for (int j = 0; j < i.size(); j++) {
            cout << i[j];
        }
        cout << "\n";
    }
}

vector<vector<char>> player_move(string player, char position, vector<vector<char>> board) {
    for (int row = 0; row < board.size(); row++) {
        for (int col = 0; col < board[row].size(); col++) {
            if (board[row][col] == position && board[row][col] != 'X' && board[row][col] != 'O') {
                if (player == "naught") {
                    board[row][col] = 'O';
                    return board;
                } else {
                    board[row][col] = 'X';
                    return board;
                }
            }
        }
    }
    cout << "Invalid choice. Forfeiting turn.\n";
    return board;
}

bool check_win(vector<vector<char>> board) {
    if (board[0][0] == 'X' && board[0][2] == 'X' && board[0][4] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[0][0] == 'O' && board[0][2] == 'O' && board[0][4] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    else if (board[0][0] == 'X' && board[2][0] == 'X' && board[4][0] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[0][0] == 'O' && board[2][0] == 'O' && board[4][0] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    else if (board[0][0] == 'X' && board[2][2] == 'X' && board[4][4] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[0][0] == 'O' && board[2][2] == 'O' && board[4][4] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    else if (board[2][0] == 'X' && board[2][2] == 'X' && board[2][4] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[2][0] == 'O' && board[2][2] == 'O' && board[2][4] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    else if (board[4][0] == 'X' && board[4][2] == 'X' && board[4][4] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[4][0] == 'O' && board[4][2] == 'O' && board[4][4] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    else if (board[0][2] == 'X' && board[2][2] == 'X' && board[4][2] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[0][2] == 'O' && board[2][2] == 'O' && board[4][2] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    else if (board[0][4] == 'X' && board[2][4] == 'X' && board[4][4] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[0][4] == 'O' && board[2][4] == 'O' && board[4][4] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    else if (board[0][4] == 'X' && board[2][2] == 'X' && board[4][0] == 'X') {
        cout << "\nCrosses win!\n";
        return true;
    }
    else if (board[0][4] == 'O' && board[2][2] == 'O' && board[4][0] == 'O') {
        cout << "\nNaughts win!\n";
        return true;
    }
    string status = "empty";
    int total_space = 25;
    int space = 0;

    for (vector<char> i : board) {
        for (int j = 0; j < i.size(); j++) {
            if (i[j] == 'X' || i[j] == 'O' || i[j] == '|' || i[j] == '-' || i[j] == '+') {
                space ++;
            }
        }
    }

    if (space == total_space) {
        cout << "\nDraw!\n";
        return true;
    }

    return false;
}