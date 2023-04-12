#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {

	int n = 0;
	printf("请输入一个数字:\n");
	scanf("%d", &n);
	int ret_1 = 1;
	int ret = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j > 0; j--) {
			ret_1 = ret_1 * j;
		}
		ret = ret + ret_1;
	}
	printf("%d\n", ret);
	return 0;
}