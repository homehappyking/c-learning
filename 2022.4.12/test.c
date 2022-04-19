#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int my_strlen(char* str) {
//	/*int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;*/
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "byte";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int fib(int n) {//递归：计算第n个斐波那契数
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main() {
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = fib(n);
//	printf("sum= %d\n", sum);
//	return 0;
//}

#include <stdlib.h>
#include "game.h"
#include <time.h>
//玩家赢 --return *
//电脑赢 --return #
//平局   --return q
//继续   --return c
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入你的选择(0/1):");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (1);
	return 0;
}