#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void InitalBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);