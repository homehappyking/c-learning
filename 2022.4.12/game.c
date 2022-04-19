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
		printf("�����\n");
		printf("������Ҫ�µ����꣺");
	scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {	
			if(board[x-1][y-1] == ' '){ 
				board[x - 1][y - 1] = '*'; 
				break;
			}
			else {
				printf("�����걻ռ��\n");
			}
			
		}
		else {
			printf("�Ƿ�����,����������\n");
		}
	}	
}
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("������:\n");
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
	for (i = 0; i < row; i++) {//����ͬ
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] &&
			board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (j = 0; j < col; j++) {//����ͬ
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] &&
			board[i][0] != ' ') {
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] &&
		board[0][0] != ' ') {//�Խ���ͬ
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&
		board[0][0] != ' ') {//�Խ���ͬ
		return board[0][2];
	}
	//�ж������Ƿ����� 1-���� 0-û��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'q';//���˷���q ��ʾƽ��
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
	char board[ROW][COL] = { 0 };//����һ����������
	InitalBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ʾ����
	while (1) {
		PlayerMove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);//��ʾ����
		res = IsWin(board, ROW, COL);//���Ӯ
		/*if (res != 'c') {
			break;
		}*/
		ComputerMove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);//��ʾ����
		res = IsWin(board, ROW, COL);//����Ӯ
		/*if (res != 'c') {
			break;
		}*/
	}
	if (res == '*') {
		printf("���Ӯ\n");
	}
	else if (res == '#') {
		printf("����Ӯ\n");
	}
	else {
		printf("ƽ��\n");
	}
}