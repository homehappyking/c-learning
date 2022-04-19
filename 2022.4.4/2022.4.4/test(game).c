#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void game() {
//	int res = 0;//生成的随机数
//	int guess = 0;//猜测的数字
//	res = rand() % 100 + 1;
//	while (1) {
//		printf("请输入你要猜的数字：");
//		scanf("%d", &guess);
//		if (guess > res) {
//			printf("猜大了\n");
//		}
//		else if (guess < res) {
//			printf("猜小了\n");
//		}
//		else {
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}	
//}
//void menu() {
//	printf("***************************\n");
//	printf("**1 开始游戏    0  退出游戏**\n");
//	printf("***************************\n");
//}
//int main() {//猜数字游戏，电脑随机生成1-100的数字，你来猜，
//	        //直到猜对才能退出游戏
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳
//	menu();
//	printf("请输入选择：");
//	scanf("%d", &input);
//	switch(input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("已退出游戏");
//			break;
//		default:
//			printf("你输入的有误（0/1)");
//			break;
//	}
//	return 0;
//}