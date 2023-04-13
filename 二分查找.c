#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("请输入要查找的数字：\n");
	int search = 0;
	scanf("%d", &search);
	//二分查找
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] > search) {
			right = mid - 1;
		}
		else if (arr[mid] < search) {
			left = mid + 1;
		}
		else if (arr[mid] == search) {
			printf("找到了，下标是%d\n", mid);
			break;
		}
		else {
			printf("找不到\n");
		}
		
	}
	return 0;
	
}