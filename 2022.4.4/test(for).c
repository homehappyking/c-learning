#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int i = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int res = 1;
//	for (i = 1; i <= n; i++) {
//		res *= i;
//	}
//	printf("%d\n", res);
//	return 0;
//}
//int main() {
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int res = 1;
//	for (i = 1; i <= 4; i++) {
//		/*int res1 = 1;
//		for (j = 1; j <= i; j++) {
//			res1 *= j;
//		}*/
//		res *= i;
//		sum += res;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main() {
//	//二分查找算法
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 11;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) 
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!!" };
//	char arr2[] = { "#####################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//void Swap(int* pa, int* pb) {
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a=%d, b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d, b=%d\n", a, b);
//	return 0;
//}
//int is_prime(int n) {
//	int j = 0;
//	for (j = 2; j < n; j++) {
//		if (n % j == 0) {
//			return 0;
//		}	
//	}
//	return 1;
//}
//
//
//int main() {
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		if (is_prime(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int is_leap_year(int x) {
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		if (is_leap_year(year) == 1) {
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int binary_search(int arr[], int x, int sz) {//二分查找函数实现方法
//	
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] < x) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > x) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return EOF;
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	int ret = 0;
//
//	while (1) {
//		scanf("%d", &k);
//		ret = binary_search(arr, k, sz);
//		if ( ret == EOF) {
//			printf("找不到\n");
//		}
//		else {
//			printf("找到了，下标为%d\n", ret);
//			break;
//		}
//	}
//	return 0;
//}
void add(int* pnum) {
	(*pnum)++;
}
int main() {
	int num = 0;
	int* pmun = &num;
	add(&num);
	printf("num = %d\n", num);
	add(&num);
	printf("num = %d\n", num);
	add(&num);
	printf("num = %d\n", num);
	return 0; 
}