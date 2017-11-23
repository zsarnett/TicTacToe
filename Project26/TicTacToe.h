#ifndef TicTacToe_H
#define	TicTacToe_H

class TicTacToe
{
 public:
 TicTacToe(); // constructor
 void print(); // print the current content of the grid
 void play_by_user(); // user’s turn to mark a cell of the grid
 void play_by_computer(); // computer’s turn to mark a cell
 void check_winnings(); // check if the player or the computer won and print who won
 void pause_215(bool have_newline);

 private:
 char ggrid[3][3];
 bool flag;
 bool playerTurn;
 int playerinput1;
 int playerinput2;
};

#endif