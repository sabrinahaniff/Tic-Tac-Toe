#include <iostream>
using namespace std;

//3 by 3 matrix with 9 elements
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';

void Draw()
{

    cout << "Tic Tac Toe" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int s = 0; s < 3; s++)
        {
            //i displays the rows and s displays the columns
            cout << matrix[i][s] << " ";
        }
        //add a new line to display it as a matrix
        cout << endl;
    }
}
void Input()
{
    int player_number;
    cout << "Enter a number from the display: " << endl;
    cin >> player_number;

    switch (player_number)
    {
    case 1:
        //prints the character on the matrix
        matrix[0][0] = player;
        break;
    case 2:
        matrix[0][1] = player;
        break;

    case 3:
        matrix[0][2] = player;
        break;
    case 4:
        matrix[1][0] = player;
        break;
    case 5:
        matrix[1][1] = player;
        break;
    case 6:
        matrix[1][2] = player;
        break;
    case 7:
        matrix[2][0] = player;
        break;
    case 8:
        matrix[2][1] = player;
        break;
    case 9:
        matrix[2][2] = player;
        break;
    default:
        cout << "That is not a number on the matrix. Please try again." << endl;
        break;
    }
}

void Player()
{
    if (player == 'X')
        player = 'O';

    else
        player = 'X';
}
char Win()
{
    //first player (x)
    //check if the whole row equals X (first coloum)
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        cout << "X" << endl;
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][0] == 'X')
        cout << "X" << endl;
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][0] == 'X')
        cout << "X" << endl;
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        cout << "X" << endl;

    //second colomn
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][2] == 'X')
        cout << "X" << endl;
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        cout << "X" << endl;
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        cout << "X" << endl;
    //diagnol
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        cout << "X" << endl;
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        cout << "X" << endl;

    //second player

    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][0] == 'O')
        cout << "O" << endl;
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][0] == 'O')
        cout << "O" << endl;
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][0] == 'O')
        cout << "O" << endl;
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        cout << "O" << endl;

    //second colomn
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        cout << "O" << endl;
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        cout << "O" << endl;
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        cout << "O" << endl;

    //diagnol
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        cout << "O" << endl;
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        cout << "O" << endl;

    //defualt
    cout << "/" << endl;
}
int main()
{
    Draw();
    while (1)
    {
        Input();
        Draw();
        if (Win() == 'X')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout << "O wins!" << endl;
            break;
        }
        Player();
    }

    string play_again;
    cout << "Would you like to play again? (y/n)" << endl;
    cin >> play_again;

    if (play_again == "y" || play_again == "Y")
    {
        Draw();
        while (1)
        {
            Input();
            Draw();
            if (Win() == 'X')
            {
                cout << "X wins!" << endl;
                break;
            }
            else if (Win() == 'O')
            {
                cout << "O wins!" << endl;
                break;
            }
            Player();
        }
    }
    else
    {
        cout << "Thank you for playing Tic Tac Toe!" << endl;
    }
    
}