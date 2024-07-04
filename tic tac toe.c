#include <stdio.h>
#include <conio.h>  // getch()
#include <stdlib.h> // system()
#include <windows.h> // Windows-specific functions

char arr[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void showBoard();    /// for showing board
int checkForWin();   /// condition to win
void setColor(int color);     // for colour indications 
void delay(int milliseconds);  
void resetBoard();

// Driver Function
int main()
{
    int player, choice, i;
    char mark; // X or O
    char playAgain;

    do
    {
        resetBoard(); // Reset the board before starting a new game
        player = 1;
        do
        {
            showBoard();
            player = (player % 2) ? 1 : 2;      // gives 0 or 1 and decide player turns
            printf("Player %d turn :", player);
            scanf("%d", &choice);
            mark = (player == 1) ? 'X' : 'O';    // first paly is for X 

            if (choice == 1 && arr[1] == '1')      // condition starts to check and fill the array positions
                arr[1] = mark;
            else if (choice == 2 && arr[2] == '2')
                arr[2] = mark;
            else if (choice == 3 && arr[3] == '3')
                arr[3] = mark;
            else if (choice == 4 && arr[4] == '4')
                arr[4] = mark;
            else if (choice == 5 && arr[5] == '5')
                arr[5] = mark;
            else if (choice == 6 && arr[6] == '6')
                arr[6] = mark;
            else if (choice == 7 && arr[7] == '7')
                arr[7] = mark;
            else if (choice == 8 && arr[8] == '8')
                arr[8] = mark;
            else if (choice == 9 && arr[9] == '9')
                arr[9] = mark;
            else
            {
                printf("Invalid value\n");      // greater than 9 values 
                player--;
                getch();
            }

            i = checkForWin();     // check every game to check win conditions
            player++;
        } while (i == -1);

        showBoard();
        if (i == 1)
        {
            printf("Player %d Won\n", --player);
        }
        else
        {
            printf("Game Draw\n");
        }

        printf("Do you want to play again? (y/n): ");
        playAgain = getch();  // Wait for user input

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}

// Function to print the Tic Tac Toe board with colors
void showBoard()
{
    system("cls");
    printf("\tTIC TAC TOE\n");
    printf("       |       |      \n");
    setColor(7);   // Default color
    printf("   ");
    setColor(arr[1] == 'X' ? 12 : arr[1] == 'O' ? 10 : 7);   // Red for X, Green for O
    printf("%c", arr[1]);
    setColor(7);
    printf("   |   ");
    setColor(arr[2] == 'X' ? 12 : arr[2] == 'O' ? 10 : 7);    // if true give color if not check another condition and give color
    printf("%c", arr[2]);
    setColor(7);
    printf("   |   ");
    setColor(arr[3] == 'X' ? 12 : arr[3] == 'O' ? 10 : 7);
    printf("%c", arr[3]);
    setColor(7);
    printf("   \n");
    printf("-------|-------|-------\n");
    printf("       |       |      \n");
    printf("   ");
    setColor(arr[4] == 'X' ? 12 : arr[4] == 'O' ? 10 : 7);
    printf("%c", arr[4]);
    setColor(7);
    printf("   |   ");
    setColor(arr[5] == 'X' ? 12 : arr[5] == 'O' ? 10 : 7);
    printf("%c", arr[5]);
    setColor(7);
    printf("   |   ");
    setColor(arr[6] == 'X' ? 12 : arr[6] == 'O' ? 10 : 7);
    printf("%c", arr[6]);
    setColor(7);
    printf("   \n");
    printf("-------|-------|-------\n");
    printf("       |       |      \n");
    printf("   ");
    setColor(arr[7] == 'X' ? 12 : arr[7] == 'O' ? 10 : 7);
    printf("%c", arr[7]);
    setColor(7);
    printf("   |   ");
    setColor(arr[8] == 'X' ? 12 : arr[8] == 'O' ? 10 : 7);
    printf("%c", arr[8]);
    setColor(7);
    printf("   |   ");
    setColor(arr[9] == 'X' ? 12 : arr[9] == 'O' ? 10 : 7);
    printf("%c", arr[9]);
    setColor(7);
    printf("   \n");
}

// Function to check if the player has won or not
int checkForWin()
{
    // Win Cases
    // Rows
    if (arr[1] == arr[2] && arr[2] == arr[3])
        return 1;
    else if (arr[4] == arr[5] && arr[5] == arr[6])
        return 1;
    else if (arr[7] == arr[8] && arr[8] == arr[9])
        return 1;
    // Columns
    else if (arr[1] == arr[4] && arr[4] == arr[7])
        return 1;
    else if (arr[2] == arr[5] && arr[5] == arr[8])
        return 1;
    else if (arr[3] == arr[6] && arr[6] == arr[9])
        return 1;
    // Diagonals
    else if (arr[1] == arr[5] && arr[5] == arr[9])
        return 1;
    else if (arr[3] == arr[5] && arr[5] == arr[7])
        return 1;
    // Draw case
    else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')
        return 0;

    else
        return -1;
}

// Function to set the color of the text
void setColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);   // a handle is an abstract reference to a resource. In this case, hConsole is a handle to the console output buffer.
    SetConsoleTextAttribute(hConsole, color);   // this function sets the attributes of characters written to the console screen
}


// Function to add a delay
void delay(int milliseconds)
{
    Sleep(milliseconds);      // used to pause scsreen for miliseconds to read the program
}


// Function to reset the game board to its initial state
void resetBoard()
{
	int i;
    for ( i = 1; i < 10; i++)
    {
        arr[i] = '0' + i;   // set all array values to initial value like 1,2... 
    }
}

