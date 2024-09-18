// tic_tac_toe.h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

struct Game {
    char board[3][3];
    void initialize();
    bool make_move(int x, int y, char player);
    bool check_winner();
    void print_board();
};

#endif // TIC_TAC_TOE_H
