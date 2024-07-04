# Tic Tac Toe Game Explanation

# Introduction
This Tic Tac Toe game is implemented in C and played on the console. The game supports two players who take turns marking the cells in a 3x3 grid with 'X' or 'O'. The player who succeeds in placing three of their marks in a row, either horizontally, vertically, or diagonally, wins the game.

# Key Concepts
1. Arrays
An array is a collection of elements of the same type placed in contiguous memory locations. In this game, an array arr[10] is used to represent the Tic Tac Toe board.

2. Functions
Functions are blocks of code that perform a specific task. Here are the key functions used in this game:
showBoard(): Displays the current state of the board.
checkForWin(): Checks if a player has won the game.
setColor(int color): Changes the color of the text displayed on the console.
delay(int milliseconds): Pauses the execution of the program for a specified amount of time.
resetBoard(): Resets the game board to its initial state for a new game.

3. Conditional Statements
Conditional statements are used to perform different actions based on different conditions. The if and else if statements check if a player's move is valid and update the board accordingly.

4. Loops
Loops are used to repeat a block of code. The do-while loop is used to continue the game until a player wins or the game ends in a draw.

5. Windows-specific Functions
The program uses some Windows-specific functions, which means it will only run on Windows operating systems. These functions include:
system("cls"): Clears the console screen.
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE): Gets a handle to the console output buffer.
SetConsoleTextAttribute(hConsole, color): Sets the color of the console text.
Sleep(milliseconds): Pauses the execution of the program for a specified number of milliseconds.

7. Handling Player Input
Player input is taken using scanf to read the player's choice of cell to mark. The getch() function is used to pause the screen and wait for the player's input.

8. Game Logic
The game logic involves checking if the current move results in a win or a draw using the checkForWin() function. The board is displayed after each move, and the game continues until a win or draw condition is met.

9. Color Coding
Colors are used to differentiate between the marks of the two players. The setColor(int color) function changes the color of the text displayed on the console:

Red for 'X' (color code 12)
Green for 'O' (color code 10)
Default color (color code 7) for other text
9. Resetting the Game
The resetBoard() function resets the board to its initial state, allowing players to start a new game without restarting the program.

# Summary
This Tic Tac Toe game in C is a simple yet comprehensive project that introduces beginners to various fundamental programming concepts such as arrays, functions, loops, conditional statements, and handling user input. Additionally, it demonstrates the use of Windows-specific functions to manage console output and color coding, enhancing the user experience.

This description provides a beginner-friendly explanation of the key concepts and functions used in the Tic Tac Toe game.
