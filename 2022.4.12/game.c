#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include <stdlib.h>
void menu() {
	printf("*******************\n");
	printf("***1 play 0 exit***\n");
	printf("*******************\n");
}
void InitalBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if(i < row - 1){
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("玩家走\n");
		printf("请输入要下的坐标：");
	scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {	
			if(board[x-1][y-1] == ' '){ 
				board[x - 1][y - 1] = '*'; 
				break;
			}
			else {
				printf("该坐标被占用\n");
			}
			
		}
		else {
			printf("非法坐标,请重新输入\n");
		}
	}	
}
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("电脑走:\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}	
}

char IsWin(char board[ROW][COL], int row, int col) {//
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {//行相同
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] &&
			board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (j = 0; j < col; j++) {//列相同
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] &&
			board[i][0] != ' ') {
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] &&
		board[0][0] != ' ') {//对角相同
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&
		board[0][0] != ' ') {//对角相同
		return board[0][2];
	}
	//判断棋盘是否满了 1-满了 0-没满
	if (1 == IsFull(board, ROW, COL))
	{
		return 'q';//满了返回q 表示平局
	}
	
	return 'c';	
}
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

void game() {
	char res = 0;
	char board[ROW][COL] = { 0 };//创建一个棋盘数组
	InitalBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//显示棋盘
	while (1) {
		PlayerMove(board, ROW, COL);//玩家下
		DisplayBoard(board, ROW, COL);//显示棋盘
		res = IsWin(board, ROW, COL);//玩家赢
		/*if (res != 'c') {
			break;
		}*/
		ComputerMove(board, ROW, COL);//电脑下
		DisplayBoard(board, ROW, COL);//显示棋盘
		res = IsWin(board, ROW, COL);//电脑赢
		/*if (res != 'c') {
			break;
		}*/
	}
	if (res == '*') {
		printf("玩家赢\n");
	}
	else if (res == '#') {
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
}