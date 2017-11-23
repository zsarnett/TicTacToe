#include <iostream>
#include <ctime>
#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			ggrid [i][j] = '?';
		}
	}
	flag = false;
}

void TicTacToe::play_by_computer()
{
	playerTurn = false;

    if(ggrid[0][0] == 'C' && ggrid[0][1] == 'C' && playerTurn == false && ggrid[0][2] == '?') //1 - 2 = 3 win
    {
        ggrid[0][2] = 'C';
        playerTurn = true;
    }

    if(ggrid[1][0] == 'C' && ggrid[1][1] == 'C' && playerTurn == false && ggrid[1][2] == '?') //4 - 5 = 6 win
    {
        ggrid[1][2] = 'C';
        playerTurn = true;
    }

    if(ggrid[2][0] == 'C' && ggrid[2][1] == 'C' && playerTurn == false && ggrid[2][2] == '?') //7 - 8 = 9 win
    {
        ggrid[2][2] = 'C';
        playerTurn = true;
    }

    if(ggrid[0][0] == 'C' && ggrid[1][0] == 'C' && playerTurn == false && ggrid[2][0] == '?') //1 - 4 = 7 win
    {
        ggrid[2][0] = 'C';
        playerTurn = true;
    }

    if(ggrid[0][1] == 'C' && ggrid[1][1] == 'C' && playerTurn == false && ggrid[2][1] == '?') //2 - 5 = 8 win
    {
        ggrid[2][1] = 'C';
        playerTurn = true;
    }

    if(ggrid[0][2] == 'C' && ggrid[1][2] == 'C' && playerTurn == false && ggrid[2][2] == '?') //3 - 6 = 9 win
    {
        ggrid[2][2] = 'C';
        playerTurn = true;
    }

    if(ggrid[0][0] == 'C' && ggrid[1][1] == 'C' && playerTurn == false && ggrid[2][2] == '?') //1 - 5 = 9 win
    {
        ggrid[2][2] = 'C';
        playerTurn = true;
    }

    if(ggrid[0][2] == 'C' && ggrid[1][1] == 'C' && playerTurn == false && ggrid[2][0] == '?') //3 - 5 = 7 win
    {
        ggrid[2][0] = 'C';
        playerTurn == true;
    }
	if((ggrid[0][0] == 'C' && ggrid[2][2] == 'C') && playerTurn == false && ggrid[1][1] == '?') //1 - 9 = 5 diagonal
        {
            ggrid[1][1] = 'C';
            playerTurn = true;
        }

    if((ggrid[1][1] == 'C' && ggrid[2][2] == 'C') && playerTurn == false && ggrid[0][0] == '?') //5 - 9 = 1 diagonal
    {
        ggrid[0][0] = 'C';
        playerTurn = true;
    }
	if((ggrid[2][0] == 'C' && ggrid[1][1] == 'C') && playerTurn == false && ggrid[0][2] == '?') //7 - 5 = 3 diagonal
        {
            ggrid[0][2] = 'C';
            playerTurn = true;
        }

    if((ggrid[2][0] == 'C' && ggrid[0][2] == 'C') && playerTurn == false && ggrid[1][1] == '?') //7 - 3 = 5 diagonal
    {
        ggrid[1][1] = 'C';
        playerTurn = true;
    }
	if((ggrid[0][0] == 'C' && ggrid[0][2] == 'C') && playerTurn == false && ggrid[0][1] == '?') //1 - 3 = 2 horizontal
        {
            ggrid[0][1] = 'C';
            playerTurn = true;
        }

    if((ggrid[0][1] == 'C' && ggrid[0][2] == 'C') && playerTurn == false && ggrid[0][0] == '?') //2 - 3 = 1 horizontal
    {
        ggrid[0][0] = 'C';
        playerTurn = true;
    }
	if((ggrid[1][0] == 'C' && ggrid[1][2] == 'C') && playerTurn == false && ggrid[1][1] == '?') //4 - 6  = 5 horizontal line 2
        {
            ggrid[1][1] = 'C';
            playerTurn = true;
        }

    if((ggrid[1][1] == 'C' && ggrid[1][2] == 'C') && playerTurn == false && ggrid[1][0] == '?') //5 - 6 = 4 horizontal line 2
    {
        ggrid[1][0] = 'C';
        playerTurn = true;
    }
	if((ggrid[2][0] == 'C' && ggrid[2][2] == 'C') && playerTurn == false && ggrid[2][1] == '?') //7 - 9 = 8 horizontal line 3
        {
            ggrid[2][1] = 'C';
            playerTurn = true;
        }

    if((ggrid[2][1] == 'C' && ggrid[2][2] == 'C') && playerTurn == false && ggrid[2][0] == '?') //8 - 9 = 7 horizontal line 3
    {
        ggrid[2][0] = 'C';
        playerTurn = true;
    }
	if((ggrid[0][0] == 'C' && ggrid[2][0] == 'C') && playerTurn == false && ggrid[1][0] == '?') //1 - 7 = 4 vertical row 1
        {
            ggrid[1][0] = 'C';
            playerTurn = true;
        }

    if((ggrid[1][0] == 'C' && ggrid[2][0] == 'C') && playerTurn == false && ggrid[0][0] == '?') //4 - 7 = 1 vertical row 1
    {
        ggrid[0][0] = 'C';
        playerTurn = true;
    }
	if((ggrid[0][1] == 'C' && ggrid[2][1] == 'C') && playerTurn == false && ggrid[1][1] == '?') //2 - 8 = 5 vertical row 2
        {
            ggrid[1][1] = 'C';
            playerTurn = true;
        }

    if((ggrid[1][1] == 'C' && ggrid[2][1] == 'C') && playerTurn == false && ggrid[0][1] == '?') //5 - 8 = 2 vertical row 2
    {
        ggrid[0][1] = 'C';
        playerTurn = true;
    }
	        if((ggrid[0][2] == 'C' && ggrid[2][2] == 'C') && playerTurn == false && ggrid[1][2] == '?') //3 - 9 = 6 vertical row 3
        {
            ggrid[1][2] = 'C';
            playerTurn = true;
        }

    if((ggrid[1][2] == 'C' && ggrid[2][2] == 'C') && playerTurn == false && ggrid[0][2] == '?') //6 - 9 = 3 vertical row 3
    {
        ggrid[0][2] = 'C';
        playerTurn = true;
    }

    if(((playerinput1 == 0 && playerinput2 == 0) || (playerinput1 == 1 && playerinput2 == 1) || (playerinput1 == 2 && playerinput2 == 2)) && playerTurn == false)
    {
        if((ggrid[0][0] == 'U' && ggrid[1][1] == 'U') && playerTurn == false && ggrid[2][2] == '?') //1 - 5 = 9 diagonal
        {
            ggrid[2][2] = 'C';
            playerTurn = true;
        }

        if((ggrid[0][0] == 'U' && ggrid[2][2] == 'U') && playerTurn == false && ggrid[1][1] == '?') //1 - 9 = 5 diagonal
        {
            ggrid[1][1] = 'C';
            playerTurn = true;
        }

        if((ggrid[1][1] == 'U' && ggrid[2][2] == 'U') && playerTurn == false && ggrid[0][0] == '?') //5 - 9 = 1 diagonal
        {
            ggrid[0][0] = 'C';
            playerTurn = true;
        }
    }

    if(((playerinput1 == 0 && playerinput2 == 2) || (playerinput1 == 1 && playerinput2 == 1) || (playerinput1 == 2 && playerinput2 == 0)) && playerTurn == false)
    {
        if((ggrid[2][0] == 'U' && ggrid[1][1] == 'U') && playerTurn == false && ggrid[0][2] == '?') //7 - 5 = 3 diagonal
        {
            ggrid[0][2] = 'C';
            playerTurn = true;
        }

        if((ggrid[2][0] == 'U' && ggrid[0][2] == 'U') && playerTurn == false && ggrid[1][1] == '?') //7 - 3 = 5 diagonal
        {
            ggrid[1][1] = 'C';
            playerTurn = true;
        }

        if((ggrid[1][1] == 'U' && ggrid[0][2] == 'U') && playerTurn == false && ggrid[2][0] == '?') //5 - 3 = 7 diagonal
        {
            ggrid[2][0] = 'C';
            playerTurn = true;
        }
    }

    if(((playerinput1 == 0 && playerinput2 == 0) || (playerinput1 == 0 && playerinput2 == 1) || (playerinput1 == 0 && playerinput2 == 2)) && playerTurn == false)
    {
        if((ggrid[0][0] == 'U' && ggrid[0][1] == 'U') && playerTurn == false && ggrid[0][2] == '?') // 1 - 2 = 3 horizontal
        {
            ggrid[0][2] = 'C';
            playerTurn = true;
        }

        if((ggrid[0][0] == 'U' && ggrid[0][2] == 'U') && playerTurn == false && ggrid[0][1] == '?') //1 - 3 = 2 horizontal
        {
            ggrid[0][1] = 'C';
            playerTurn = true;
        }

        if((ggrid[0][1] == 'U' && ggrid[0][2] == 'U') && playerTurn == false && ggrid[0][0] == '?') //2 - 3 = 1 horizontal
        {
            ggrid[0][0] = 'C';
            playerTurn = true;
        }
    }

    if(((playerinput1 == 1 && playerinput2 == 0) || (playerinput1 == 1 && playerinput2 == 1) || (playerinput1 == 1 && playerinput2 == 2)) && playerTurn == false)
    {
        if((ggrid[1][0] == 'U' && ggrid[1][1] == 'U') && playerTurn == false && ggrid[1][2] == '?') //4 - 5 = 6 horizontal line 2
        {
            ggrid[1][2] = 'C';
            playerTurn = true;
        }

        if((ggrid[1][0] == 'U' && ggrid[1][2] == 'U') && playerTurn == false && ggrid[1][1] == '?') //4 - 6  = 5 horizontal line 2
        {
            ggrid[1][1] = 'C';
            playerTurn = true;
        }

        if((ggrid[1][1] == 'U' && ggrid[1][2] == 'U') && playerTurn == false && ggrid[1][0] == '?') //5 - 6 = 4 horizontal line 2
        {
            ggrid[1][0] = 'C';
            playerTurn = true;
        }
    }

    if(((playerinput1 == 2 && playerinput2 == 0) || (playerinput1 == 2 && playerinput2 == 1) || (playerinput1 == 2 && playerinput2 == 2)) && playerTurn == false)
    {
        if((ggrid[2][0] == 'U' && ggrid[2][1] == 'U') && playerTurn == false && ggrid[2][2] == '?') //7 - 8 = 9 horizontal line 3
        {
            ggrid[2][2] = 'C';
            playerTurn = true;
        }

        if((ggrid[2][0] == 'U' && ggrid[2][2] == 'U') && playerTurn == false && ggrid[2][1] == '?') //7 - 9 = 8 horizontal line 3
        {
            ggrid[2][1] = 'C';
            playerTurn = true;
        }

        if((ggrid[2][1] == 'U' && ggrid[2][2] == 'U') && playerTurn == false && ggrid[2][0] == '?') //8 - 9 = 7 horizontal line 3
        {
            ggrid[2][0] = 'C';
            playerTurn = true;
        }
    }

    if(((playerinput1 == 0 && playerinput2 == 0) || (playerinput1 == 1 && playerinput2 == 0) || (playerinput1 == 2 && playerinput2 == 0)) && playerTurn == false)
    {
        if((ggrid[0][0] == 'U' && ggrid[1][0] == 'U') && playerTurn == false && ggrid[2][0] == '?') //1 - 4 = 7 vertical row 1
        {
            ggrid[2][0] = 'C';
            playerTurn = true;
        }

        if((ggrid[0][0] == 'U' && ggrid[2][0] == 'U') && playerTurn == false && ggrid[1][0] == '?') //1 - 7 = 4 vertical row 1
        {
            ggrid[1][0] = 'C';
            playerTurn = true;
        }

        if((ggrid[1][0] == 'U' && ggrid[2][0] == 'U') && playerTurn == false && ggrid[0][0] == '?') //4 - 7 = 1 vertical row 1
        {
            ggrid[0][0] = 'C';
            playerTurn = true;
        }

    }

    if(((playerinput1 == 0 && playerinput2 == 1) || (playerinput1 == 1 && playerinput2 == 1) || (playerinput1 == 2 && playerinput2 == 1)) && playerTurn == false)
    {
        if((ggrid[0][1] == 'U' && ggrid[1][1] == 'U') && playerTurn == false && ggrid[2][1] == '?') //2 - 5 = 8 vertical row 2
        {
            ggrid[2][1] = 'C';
            playerTurn = true;
        }

        if((ggrid[0][1] == 'U' && ggrid[2][1] == 'U') && playerTurn == false && ggrid[1][1] == '?') //2 - 8 = 5 vertical row 2
        {
            ggrid[1][1] = 'C';
            playerTurn = true;
        }

        if((ggrid[1][1] == 'U' && ggrid[2][1] == 'U') && playerTurn == false && ggrid[0][1] == '?') //5 - 8 = 2 vertical row 2
        {
            ggrid[0][1] = 'C';
            playerTurn = true;
        }
    }

    if(((playerinput1 == 0 && playerinput2 == 2) || (playerinput1 == 1 && playerinput2 == 2) || (playerinput1 == 2 && playerinput2 == 2)) && playerTurn == false)
    {
        if((ggrid[0][2] == 'U' && ggrid[1][2] == 'U') && playerTurn == false && ggrid[2][2] == '?') //3 - 6 = 9 vertical row 3
        {
            ggrid[2][2] = 'C';
            playerTurn = true;
        }

        if((ggrid[0][2] == 'U' && ggrid[2][2] == 'U') && playerTurn == false && ggrid[1][2] == '?') //3 - 9 = 6 vertical row 3
        {
            ggrid[1][2] = 'C';
            playerTurn = true;
        }

        if((ggrid[1][2] == 'U' && ggrid[2][2] == 'U') && playerTurn == false && ggrid[0][2] == '?') //6 - 9 = 3 vertical row 3
        {
            ggrid[0][2] = 'C';
            playerTurn = true;
        }
    }
	if (playerTurn == false)
	{
		srand(time(0));
		int d1 = rand() % 3;
		int d2 = rand() % 3;

		while(!(ggrid [d1][d2] == '?'))
		{
			d1 = rand() % 3;
			d2 = rand() % 3;
		}
		ggrid [d1][d2] = 'C';
	}
 }

void TicTacToe::check_winnings()
{
	for(int i = 0; i < 3; i++)
	{
		if((ggrid[i][0]==ggrid[i][1]) && (ggrid[i][1]==ggrid[i][2]))
		{
			if (ggrid[i][0] == 'U')
			{
				cout << "Congratulation! You won!" << endl;
				print();
				flag = true;
			}

			if (ggrid[i][0] == 'C')
			{
				cout << "Sorry, you lost!" << endl;
				print();
				flag = true;
			}
		}
	}
	
	if(flag == false)
	{
		for(int i = 0; i < 3; i++)
		{
			if((ggrid[0][i]==ggrid[1][i]) && (ggrid[1][i]==ggrid[2][i]))
			{
				if (ggrid[0][i] == 'U')
				{
					cout << "Congratulation! You won!" << endl;
					print();
					flag = true;
				}

				if (ggrid[0][i] == 'C')
				{
					cout << "Sorry, you lost!" << endl;
					print();
					flag = true;
				}
			}
		}
	}

	if (flag == false)
	{
		if ((ggrid[0][0]==ggrid[1][1]) && (ggrid[1][1]==ggrid[2][2]))
		{
			if (ggrid[0][0] == 'U')
				{
					cout << "Congratulation! You won!" << endl;
					print();
					flag = true;
				}

			if (ggrid[0][0] == 'C')
				{
					cout << "Sorry, you lost!" << endl;
					print();
					flag = true;
				}
		}
	}

	if (flag == false)
	{
		if ((ggrid[0][2]==ggrid[1][1]) && (ggrid[1][1]==ggrid[2][0]))
		{
			if (ggrid[0][2] == 'U')
				{
					cout << "Congratulation! You won!" << endl;
					print();
					flag = true;
				}

			if (ggrid[0][2] == 'C')
				{
					cout << "Sorry, you lost!" << endl;
					print();
					flag = true;
				}
		}
	}
	int counter = 0;
	if (flag == false)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (!(ggrid [i][j] == '?'))
				{
					counter++;
				}
				if (counter == 9)
				{
					flag = true;
					cout << "Game is over with no winner!" << endl;
					print();
				}
			}
		}
	}
}

void TicTacToe::play_by_user()
{
	while(flag == false)
	{
		playerinput1 = 0;
		playerinput2 = 0;
		cout << endl << "Which cell would you like to mark (row and column)? ";
		cin >> playerinput1 >> playerinput2;
		while(cin.fail() || (playerinput1 >= 3) || (playerinput1 <= -1) || (playerinput2 >= 3) || (playerinput2 <= -1) || !(ggrid [playerinput1][playerinput2] == '?')) //cin.fail() checks to see if the value in the cin
		{
			if(cin.fail())
			{
				cin.clear(); //This corrects the stream.
				cin.ignore(256, '\n'); //This skips the left over stream data.
				cout << "Invalid Input!" << endl;
				cout << endl << "Which cell would you like to mark (row and column)? ";
				cin >> playerinput1 >> playerinput2;
			}
		
			else if ((playerinput1 >= 3) || (playerinput1 <= -1) || (playerinput2 >= 3) || (playerinput2 <= -1))
			{
				cout << "Invalid cell position! Please try again..." << endl;

				cout << endl << "Which cell would you like to mark (row and column)? ";
				cin >> playerinput1 >> playerinput2;
			}
			else if (!(ggrid [playerinput1][playerinput2] == '?'))
			{
				cout << "The cell has been marked already! Please try again..." << endl;
				cout << endl << "Which cell would you like to mark (row and column)? ";
				cin >> playerinput1 >> playerinput2;
			}
		}	

		ggrid [playerinput1][playerinput2] = 'U';

		check_winnings();

		if (flag == false)
		{
			play_by_computer();
			check_winnings();
			if (flag == false)
			{
					print();
			}
		}
	}
}

void TicTacToe::print()
{
	cout << "  0 1 2" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << ggrid[i][j] << " ";
		}
		cout << endl;
	}
}

void pause_215(bool have_newline)
{
    if (have_newline) {
        // Ignore the newline after the user's previous input.
        cin.ignore(256, '\n');
    }

    // Prompt for the user to press ENTER, then wait for a newline.
    cout << endl << "Press ENTER to continue." << endl;
    cin.ignore(256, '\n');
}