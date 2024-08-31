#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

char arr[5][5];
char player1 = 'X';
char player2 = 'O';

void play_game();
void initialize(char arr[][5]);
void printArray(char arr[][5]);
_Bool check_move(char arr[][5],int x,int y);
void player1move(char arr[][5]);
void player2move(char arr[][5]);
int check_winner(char arr[][5]);

int main(void)
{
    play_game();
    return 0;
}















void initialize(char arr[][5])
{
    for(int i = 0; i < 5;i++)
    {
        for(int j = 0; j < 5;j++)
        {
            if(i == 0 || j == 0 || i == 4 || j == 4)
            {
                arr[i][j] = '*';
            }
            else{
                arr[i][j] = ' ';
            }
        }
    }
}

void printArray(char arr[][5])
{
    system("cls");
   
    for(int i = 0; i < 5;i++)
    {
        for(int j = 0; j < 5;j++)
        {
           if (arr[i][j] == 'X') 
           {
                printf("\033[1;31m");
                printf("%c ", arr[i][j]);
                printf("\033[0m");
            }
            else if (arr[i][j] == 'O') 
            {
                printf("\033[1;34m");
                printf("%c ", arr[i][j]);
                printf("\033[0m"); 
            } 
            else 
            {
                printf("\033[1;33m");
                printf("%c ", arr[i][j]);
                printf("\033[0m");
            }
        }
        printf("\n");
    }
}

bool check_move(char arr[][5], int x, int y)
{
    if(x >= 1 && x <= 3 && y >= 1 && y <= 3 && arr[x][y] == ' ')
    {
        return true;
    }
    printf("Invalid move! Try again.\n");
    return false;
}

void player1move(char arr[][5])
{
    int x, y;
    do{
        printf("Player 1 move row and column separated by space: ");
        scanf("%d %d", &x, &y);
    }while(!check_move(arr, x, y));

    arr[x][y] = player1;
}

void player2move(char arr[][5])
{
    int x, y;
    do{
        printf("Player 2 move row and column separated by space: ");
        scanf("%d %d", &x, &y);
    }while(!check_move(arr, x, y));

    arr[x][y] = player2;
}

int check_winner(char arr[][5])
{
    for (int i = 1; i <= 3; i++) 
    {
        if (arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1] != ' ') 
        {
            return arr[i][1] == player1 ? 1 : 2;
        }
    }

    for (int i = 1; i <= 3; i++) 
    {
        if (arr[1][i] == arr[2][i] && arr[2][i] == arr[3][i] && arr[1][i] != ' ') 
        {
            return arr[1][i] == player1 ? 1 : 2;
        }
    }

    if (arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[1][1] != ' ') 
    {
        return arr[1][1] == player1 ? 1 : 2;
    }
    if (arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1] && arr[1][3] != ' ') 
    {
        return arr[1][3] == player1 ? 1 : 2;
    }

    return 0;
}

void play_game()
{
    int winner = 0;
    int turn = 0;
    char playAgain;

    do
    {
        int i = 3;
        printf("TIC TAC TOE!\n");
        printf("\033[1;32m");
        while (i > 0) 
        {
            printf("\rThe Game starts in %d", i);
            fflush(stdout); 
            i--;
            Sleep(1000);
        }
        printf("\033[0m");
        initialize(arr);
        printArray(arr);
        winner = 0;
        turn = 0;

        while (turn < 9 && winner == 0)
        {
            if (turn % 2 == 0)
            {
                player1move(arr);
            }
            else
            {
                player2move(arr);
            }
            printArray(arr);
            winner = check_winner(arr);
            turn++;
        }

        if (winner)
        {
            if (winner == 1)
            {
                printf("Player 1 wins!\n");
            }
            else
            {
                printf("Player 2 wins!\n");
            }
        }
        else
        {
            printf("It's a draw!\n");
        }

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        system("cls");
        
    } while(playAgain == 'y' || playAgain == 'Y');
}
