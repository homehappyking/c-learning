//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////int main() {
////	int arr[2][3] = { {1,2,3}, {4,5,6} };
////	int i = 0;
////	
////	for (i = 0; i < 2; i++) {
////		int j = 0;
////		for (j = 0; j < 3; j++) {
////			printf("&arr[%d][%d]= %p\n", i, j, &arr[i][j]);
////		}
////		//printf("\n");
////	}
////	return 0;
////}
//void bubble_sort(int arr[], int sz) {
//	int i = 0;
//	int flag = 1;//假设数组已经是升序的
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		int temp = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] < arr[j + 1]) {//冒泡排序（升序）
//				temp = arr[j];			//if(arr[j] < arr[j + 1]) 降序
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//数组部分未升序
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	
//}
//int main() {
//	int arr[10] = { 10,9,8,18,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//		
//	}
//	return 0;
//}