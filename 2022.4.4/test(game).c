#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void game() {
//	int res = 0;//���ɵ������
//	int guess = 0;//�²������
//	res = rand() % 100 + 1;
//	while (1) {
//		printf("��������Ҫ�µ����֣�");
//		scanf("%d", &guess);
//		if (guess > res) {
//			printf("�´���\n");
//		}
//		else if (guess < res) {
//			printf("��С��\n");
//		}
//		else {
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}	
//}
//void menu() {
//	printf("***************************\n");
//	printf("**1 ��ʼ��Ϸ    0  �˳���Ϸ**\n");
//	printf("***************************\n");
//}
//int main() {//��������Ϸ�������������1-100�����֣������£�
//	        //ֱ���¶Բ����˳���Ϸ
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ���
//	menu();
//	printf("������ѡ��");
//	scanf("%d", &input);
//	switch(input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("���˳���Ϸ");
//			break;
//		default:
//			printf("�����������0/1)");
//			break;
//	}
//	return 0;
//}