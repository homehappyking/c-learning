#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//打印1-100中3的倍数
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) 
//	{
//		if (i % 3 == 0) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//    int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n) {
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main() {//打印100-200的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	double b = 0;
//	b = 97 / 9;
//	printf("%f\n", b);
//	return 0;
//}
//int main() {
//	int i = 0;
//	double sum = 0;
//	int com = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += (com)*1.0 / i;
//		com = -com;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main() {//打印1-10中最大的值
//	int arr[10] = { 1,2,3,4,100,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main() {//打印9*9乘法表
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
