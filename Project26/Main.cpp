 //Date: 04/06/2015
 //Purpose: Player vs. Computer TicTacToe
 //         
 //Author: (Zackary Arnett)

#include <iostream>

#include "TicTacToe.h"

using namespace std;

void pause_215(bool have_newline);

int main()
{
	TicTacToe T;

	T.print();

	T.play_by_user();

	pause_215(true);

    return 0;
}