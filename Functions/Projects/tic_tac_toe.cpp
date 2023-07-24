#include <iostream>
#include <vector>
#include "ttt_utilities.h"
using namespace std;

int main() {

    vector<vector<char>> board = {{'1', '|', '2', '|', '3'}, {'-', '+', '-', '+', '-'}, {'4', '|', '5', '|', '6'}, {'-', '+', '-', '+', '-'}, {'7', '|', '8', '|', '9'}};
    string player_1 = "naught";
    string player_2 = "cross";
    bool winner = false;

    while (!winner) {
        cout << "\n";

        display_board(board);
        char p1_move;
        char p2_move;

        cout << "\n\nPlayer One, make your move!\n\n";
        cin >> p1_move;

        cout << "\n";

        board = player_move(player_1, p1_move, board);

        display_board(board);

        winner = check_win(board);

        if (winner) {
            break;
        }


        cout << "\n\nPlayer Two, make your move!\n\n";
        cin >> p2_move;

        cout << "\n";

        board = player_move(player_2, p2_move, board);

        winner = check_win(board);

        if (winner) {
            break;
        }
    }

    cout << "\n\n=====\n=====\n";
    display_board(board);
    cout << "=====\n=====\n\n\n";
    
}