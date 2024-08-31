# Tic-Tac-Toe Game

## Overview
This is a simple command-line Tic-Tac-Toe game implemented in C. It allows two players to take turns placing their marks (X and O) on a 3x3 grid, and it determines the winner or a draw after every turn. The game can be played multiple times in a single session.

## Features
- Two-player gameplay
- Simple command-line interface
- Validation of player moves
- Detection of a winner or a draw
- Option to play multiple rounds

## Installation
To run this game, you need to have a C compiler installed on your system.

### Windows
 1. Download and install [MinGW](http://www.mingw.org/) or use [Visual Studio](https://visualstudio.microsoft.com/) with C/C++ support.
 2. Clone the repository or download the source files.
 
   ```bash
   git clone https://github.com/your-username/tic-tac-toe.git
   cd tic-tac-toe
   ```
 3. Compile the game using the command line.
 
   ```bash
   gcc tic_tac_toe.c -o tic_tac_toe
   ```
 4. Run the game

   ```bash
  ./tic_tac_toe
   ```

### Linux/MacOS

1. Ensure you have `gcc` installed. You can install it via the package manager:

Ubuntu/Debian:

```bash
 sudo apt-get install build-essential
```
Fedora:

```bash
sudo dnf install gcc
```
macOS:

```bash
xcode-select --install
```
2. Clone the repository or download the source files.

```bash
git clone https://github.com/your-username/tic-tac-toe.git
cd tic-tac-toe
```

3. Compile the game:
```bash
gcc tic_tac_toe.c -o tic_tac_toe
```
4. Run the game:
```bash
./tic_tac_toe
```


# How to Play

1. The game will prompt Player 1 (X) to enter their move by specifying the row and column (e.g., 1 2 for row 1, column 2).

2. After Player 1 makes their move, the game will prompt Player 2 (O) to enter their move.

3. The game will check for a winner after each turn.

4. If all 9 moves are made without a winner, the game will declare a draw.

5. After the game ends, you will be asked if you want to play again. Enter y to play another round, or n to exit.

# Example
```bash
TIC TAC TOE!
The Game starts in 3
* * * * *
*       *
*       *
*       *
* * * * *

Player 1 move row and column separated by space: 1 1
* * * * *
* X     *
*       *
*       *
* * * * *

Player 2 move row and column separated by space: 1 2
* * * * *
* X O   *
*       *
*       *
* * * * *

Player 1 move row and column separated by space: 2 1
* * * * *
* X O   *
* X     *
*       *
* * * * *

Player 2 move row and column separated by space: 2 2
* * * * *
* X O   *
* X O   *
*       *
* * * * *
```
# Contributing

Feel free to fork this repository, open issues, and submit pull requests. Contributions are welcome!


