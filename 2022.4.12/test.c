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
//int fib(int n) {//�ݹ飺�����n��쳲�������
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
//���Ӯ --return *
//����Ӯ --return #
//ƽ��   --return q
//����   --return c
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("���������ѡ��(0/1):");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (1);
	return 0;
}